import React from 'react'
import { StaticQuery, graphql } from 'gatsby'

import Layout from '../../components/layout'
import Blog from '../../../re/Blog.bs'

const BlogPage = () => (
  <Layout>
    <StaticQuery
      query={graphql`
        query AllMarkdownRemark {
          allMarkdownRemark {
            edges {
              node {
                tableOfContents(pathToSlugField: "frontmatter.path")
                frontmatter {
                  path
                  title
                  date
                }
                id
                excerpt
              }
            }
          }
        }
      `}
      render={data => {
        const posts = data.allMarkdownRemark.edges.map(edge => edge.node)
        return <Blog posts={posts} />
      }}
    />
  </Layout>
)

export default BlogPage
