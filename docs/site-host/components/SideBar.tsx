import {
  Stack,
  Panel,
  PanelType,
  List
} from "@fluentui/react"
import Link from "next/link"
import React from "react"

export interface SideBarProps
{
  structs: Array<string>
}

const SideBar: React.FC<SideBarProps> = ({ structs }) => {
  return (
    <aside id="main-sidebar" className="card">
      <h3>Structs</h3>
      <List items={ structs.map(elm => ({ name: elm })) }/>
    </aside>
  )
}
export default SideBar