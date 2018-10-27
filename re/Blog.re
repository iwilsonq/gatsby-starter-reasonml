let str = ReasonReact.string;

type post = {
  .
  "id": string,
  "excerpt": string,
  "frontmatter": {
    .
    title: string,
    date: string,
  },
};

let component = ReasonReact.statelessComponent("Blog");

let make = (~posts, _children) => {
  ...component,
  render: _self => {
    let renderPosts = posts |> Array.map(post => <Post key=post##id post />) |> ReasonReact.array;
    <div> <h1> {"Blog" |> str} </h1> renderPosts </div>;
  },
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(~posts=jsProps##posts, [||]));