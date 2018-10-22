module Link = {
  [@bs.module "gatsby"] external link: ReasonReact.reactClass = "Link";

  [@bs.deriving abstract]
  type jsProps = {
    [@bs.as "to"] to_: string,
    className: string
  };

  let make = (~to_, ~className, children) => 
    ReasonReact.wrapJsForReason(
      ~reactClass=link,
      ~props=jsProps(~to_, ~className),
      children
    );
};