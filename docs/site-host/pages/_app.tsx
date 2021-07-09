import '../styles/globals.scss'
import type { AppProps } from 'next/app'

import "@fluentui/react/dist/css/fabric.min.css"

function MyApp({ Component, pageProps }: AppProps) {
  return (
    <Component {...pageProps} />
  )
}
export default MyApp
