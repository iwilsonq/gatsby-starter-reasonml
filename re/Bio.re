let str = ReasonReact.string;
let component = ReasonReact.statelessComponent("Bio");

module Styles = {
  open Css;

  let wrapper = style([display(`flex), marginBottom(px(16))]);
  let img =
    style([width(px(64)), height(px(64)), borderRadius(px(32)), marginRight(px(12))]);

  let bioText = style([display(`flex), alignItems(`center)]);
};

let make = _children => {
  ...component,
  render: _self =>
    <div className=Styles.wrapper>
      <img src="/images/iwilsonq.jpg" alt="Ian Wilson" className=Styles.img />
      <p className=Styles.bioText>
        {"Written by Ian Wilson who lives and works in Cupertino building useful things." |> str}
        <a href="https://twitter.com/iwilsonq"> {"You should follow him on Twitter" |> str} </a>
      </p>
    </div>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));