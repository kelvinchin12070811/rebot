import '../styles/globals.css'
import type { AppProps } from 'next/app'

import { ThemeProvider } from "@fluentui/react"

import "@fluentui/react/dist/css/fabric.min.css"

function MyApp({ Component, pageProps }: AppProps) {
  return (
    <ThemeProvider>
      <Component {...pageProps} />
    </ThemeProvider>
  )
}
export default MyApp
