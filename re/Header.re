let component = ReasonReact.statelessComponent("header");

module Styles = {
  open Css;
  let header = style([backgroundColor(hex("db4d3f")), marginBottom(px(16))]);
  let content = style([margin2(~v=px(0), ~h=`auto), maxWidth(px(936)), padding(px(8))]);
  let h1 = style([margin(px(0))]);
  let link = style([color(white), textDecoration(none)]);
}

let make = (~siteTitle, _children) => {
  ...component,
  render: _self => {
    <header className=Styles.header>
      <div className=Styles.content>
        <h1 className=Styles.h1>
           <Gatsby.Link to_="/" className=Styles.link>
            {siteTitle |> ReasonReact.string}
           </Gatsby.Link> 
        </h1>
      </div>
    </header>
  }
}

let default = ReasonReact.wrapReasonForJs(~component, jsProps => 
  make(~siteTitle=jsProps##siteTitle, [||])
);
