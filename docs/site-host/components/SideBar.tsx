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
    <Panel isOpen={ true } isBlocking={ false } type={ PanelType.customNear } customWidth="300px">
      <h3>Structs</h3>
      <List items={ structs.map(elm => ({ name: elm })) }/>
    </Panel>
  )
}
export default SideBar