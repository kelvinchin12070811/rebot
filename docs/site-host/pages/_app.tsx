import '../styles/globals.scss'
import type { AppProps } from 'next/app'

import Footer from '../components/Footer'

import "@fluentui/react/dist/css/fabric.min.css"

function MyApp({ Component, pageProps }: AppProps) {
  return (
    <>
      <Component {...pageProps} />
      <Footer />
    </>
  )
}
export default MyApp
