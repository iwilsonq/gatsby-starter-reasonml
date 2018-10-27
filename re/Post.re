let str = ReasonReact.string;

module Styles = {
  open Css;

  let post =
    style([border(px(1), `solid, `hex("000")), padding(px(8)), marginBottom(px(12))]);
};

let component = ReasonReact.statelessComponent("Post");

let make = (~post, _children) => {
  ...component,
  render: _self =>
    <Gatsby.Link to_={"/blog/" ++ post##frontmatter##path} className="">
      <article className=Styles.post>
        <h3> {post##frontmatter##title |> str} </h3>
        <p> {post##excerpt} </p>
        <small> {post##frontmatter##date |> str} </small>
      </article>
    </Gatsby.Link>,
};