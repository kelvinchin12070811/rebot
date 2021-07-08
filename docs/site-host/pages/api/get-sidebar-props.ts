import { promises as fs } from "fs"
import { NextApiRequest, NextApiResponse } from "next"
import path from "path"
import * as xmldom from "xmldom"
import * as xpath from "xpath"

const getSidebarProps = async (req: NextApiRequest, res: NextApiResponse) => {
    const pthIndex = path.join(process.cwd(), '../xml/index.xml')
    const docIndex = new xmldom.DOMParser().parseFromString(
        await fs.readFile(pthIndex, 'utf-8')
    )

    const structs = (xpath.select('/doxygenindex/compound[@kind="struct"]/name', docIndex) as Array<Node>)
        .map(struct => struct.textContent as string)

    res.send(JSON.stringify({ structs }))
}
export default getSidebarProps