import React from 'react'

import Layout from '../components/layout'

const IndexPage = () => (
  <Layout>
    <h1>Gatsby &hearts; ReasonML</h1>
    <p>Use this starter to create static sites with Gatsby using ReasonML components</p>

    <h2>Features</h2>
    <ul>
      <li>ReasonReact for type-safe React components in ReasonML</li>
      <li>bs-css for css-in-reason styling (based on glamor)</li>
    </ul>

    <h2>Reference</h2>
    <ul>
      <li>see re/Header.re for example component implementation</li>
      <li>see re/types/Gatsby.re for example BuckleScript bindings to Gatsby module</li>
    </ul>
  </Layout>
)

export default IndexPage
