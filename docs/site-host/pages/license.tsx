import {
  GetStaticProps,
} from "next"
import Head from "next/head"
import React from "react"
import ReactMarkdown from "react-markdown"
import SideBar, { SideBarProps } from "../components/SideBar"

interface LicenseProps
{
  content: string
  sidebarProps: SideBarProps
}

const License: React.FC<LicenseProps> = ({ content, sidebarProps }) => {
  return (
    <>
      <Head>
        <title>License</title>
      </Head>
      <SideBar { ...sidebarProps } />
      <article className="card main-container" style={{ overflowX: 'auto' }}>
        <ReactMarkdown>{ content }</ReactMarkdown>
      </article>
    </>
  )
}
export default License

export const getStaticProps: GetStaticProps = async () => {
  return {
    props: {
      content: await(await fetch('http://localhost:3000/pages/license.md')).text() as string,
      sidebarProps: await(await fetch('http://localhost:3000/api/get-sidebar-props')).json() as SideBarProps
    }
  }
}