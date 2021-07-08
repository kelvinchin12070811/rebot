import {
} from "@fluentui/react"
import { promises as fs } from "fs"
import {
  GetStaticProps,
} from "next"
import Path from "path"
import React from "react"
import ReactMarkdown  from "react-markdown"

import SideBar, { getSideBarProps } from "../components/SideBar"

interface HomeProps
{
  content: string
  sidebarProps: any
}

const Home: React.FC<HomeProps> = ({ content, sidebarProps }) => {
  return (
    <>
      <SideBar { ...sidebarProps }/>
      <ReactMarkdown>{ content }</ReactMarkdown>
    </>
  )
}

export default Home

export const getStaticProps: GetStaticProps = async () => {
  const page = await fs.readFile(Path.join(process.cwd(), "../../readme.md"), 'utf-8')
  
  return {
    props: {
      content: page,
      sidebarProps: getSideBarProps()
    }
  }
}