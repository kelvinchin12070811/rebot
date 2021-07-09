import React, {
  useState,
} from "react"

import styles from "../styles/Footer.module.scss"

const Footer: React.FC = () => {
  const [date, setDate] = useState(new Date())
  return (
    <footer className={ styles.footer }>
      <div>&copy;Kelvin Chin { date.getFullYear() }</div>
      <div>Generated with doxygen and Next.js</div>
      <div>Licensed under MPL 2.0</div>
      <div>Last update at { date.toISOString() }</div>
    </footer>
  )
}
export default Footer