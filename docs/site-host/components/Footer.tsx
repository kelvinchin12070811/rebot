import Link from "next/dist/client/link"
import React, {
  useState,
} from "react"

import styles from "../styles/Footer.module.scss"

const Footer: React.FC = () => {
  const [date, setDate] = useState(new Date())
  return (
    <footer className={ styles.footer }>
      <div>
        &copy;Kelvin Chin { date.getFullYear() }, Licensed under{ ' ' }
        <Link href='/license'><a>MPL 2.0</a></Link>
      </div>
      <div>
        Generated with <a href='https://www.doxygen.nl/'>doxygen</a> and{ ' ' }
        <a href='https://nextjs.org/'>Next.js</a>, last update at { date.toISOString() }
      </div>
    </footer>
  )
}
export default Footer