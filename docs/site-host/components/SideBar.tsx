import {
  GetStaticProps
} from "next"
import React from "react"

interface SideBarProps
{
  text: string
}

const SideBar: React.FC<SideBarProps> = ({ text }) => {
  return (<p>{ text }</p>)
}
export default SideBar

export const getSideBarProps = (): SideBarProps => {
  return {
    text: 'test'
  }
}