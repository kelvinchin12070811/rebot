import {
  initializeIcons,
  List,
  Panel,
} from "@fluentui/react"
import Link from "next/link"
import React, {
  useState,
  useEffect,
} from "react"

initializeIcons()

export interface SideBarProps
{
  structs: Array<string>
}

const SideBar: React.FC<SideBarProps> = ({ structs }) => {
  const [winWidth, setWinWidth] = useState(0)
  const [isShowSidebar, setShowSidebar] = useState(false)

  const InnerElement = () => (
    <>
      <h3>Structs</h3>
      <List items={ structs.map(elm => ({ name: elm })) }/>
    </>
  )

  useEffect(() => {
    const evHwnd = () => setWinWidth(typeof window === 'undefined' ? 0 : window.innerWidth)
    evHwnd()

    if (typeof window !== 'undefined')
    {
      window.addEventListener('resize', evHwnd)
      return () => {
        window.removeEventListener('resize', evHwnd)
      }
    }
  })

  if (winWidth >= 900)
  {
    return (
      <aside id="main-sidebar" className="card hideOnSmallScreen">
        <InnerElement />
      </aside>
    )
  }
  else
  {
    return (
      <Panel isOpen={ isShowSidebar }><InnerElement /></Panel>
    )
  }
}
export default SideBar