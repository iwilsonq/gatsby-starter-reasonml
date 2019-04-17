module Styles = {
  open Css;
  let header =
    style([backgroundColor(hex("db4d3f")), marginBottom(px(16))]);
  let content =
    style([
      display(`flex),
      alignItems(`center),
      justifyContent(`spaceBetween),
      margin2(~v=px(0), ~h=`auto),
      maxWidth(px(1000)),
      padding2(~v=px(16), ~h=px(24)),
    ]);
  let h1 = style([margin(px(0))]);
  let link = style([color(white), textDecoration(none)]);
  let nav = style([]);
};

[@react.component]
let make = (~siteTitle) => {
  <header className=Styles.header>
    <div className=Styles.content>
      <h1 className=Styles.h1>
        <Gatsby.Link _to="/" className=Styles.link>
          {siteTitle |> ReasonReact.string}
        </Gatsby.Link>
      </h1>
      <nav className=Styles.nav>
        <Gatsby.Link _to="/blog" className=Styles.link>
          {"Blog" |> ReasonReact.string}
        </Gatsby.Link>
      </nav>
    </div>
  </header>;
};

let default = make;