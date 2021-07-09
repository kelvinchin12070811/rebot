import {
  List
} from "@fluentui/react"
import { promises as fs } from "fs"
import {
  GetStaticProps,
} from "next"
import Path from "path"
import React, {
  useState,
} from "react"
import ReactMarkdown  from "react-markdown"

import SideBar, { SideBarProps } from "../components/SideBar"

interface HomeProps
{
  content: string
  sidebarProps: SideBarProps
}

let list: any = []
for (let i = 0; i < 100; i++)
  list.push({ name: i })

const Home: React.FC<HomeProps> = ({ content, sidebarProps }) => {
  return (
    <>
      <SideBar { ...sidebarProps }/>
      <article className="card main-container">
        <ReactMarkdown>{ content }</ReactMarkdown>
        <List items={ list } />
      </article>
    </>
  )
}

export default Home

export const getStaticProps: GetStaticProps = async () => {
  const page = await fs.readFile(Path.join(process.cwd(), "../../readme.md"), 'utf-8')

  return {
    props: {
      content: page,
      sidebarProps: await (await fetch('http://localhost:3000/api/get-sidebar-props')).json() as SideBarProps
    }
  }
}