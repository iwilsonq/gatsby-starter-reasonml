module Link = {
  [@bs.module "gatsby"] external link: ReasonReact.reactClass = "Link";

  [@bs.deriving abstract]
  type jsProps = {
    [@bs.as "to"]
    to_: string,
    className: string,
  };

  let make = (~to_, ~className, children) =>
    ReasonReact.wrapJsForReason(~reactClass=link, ~props=jsProps(~to_, ~className), children);
};

/* WIP: StaticQuery. Try to use  from the top level page components in pure JS. Its easier for now */
module StaticQuery = {
  [@bs.module "gatsby"] external staticQuery: ReasonReact.reactClass = "StaticQuery";

  [@bs.deriving abstract]
  type jsProps = {query: string};

  let make = (~query, children) =>
    ReasonReact.wrapJsForReason(~reactClass=staticQuery, ~props=jsProps(~query), children);
};