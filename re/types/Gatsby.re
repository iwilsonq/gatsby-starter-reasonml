module Link = {
  [@bs.module "gatsby"] [@react.component]
  external make:
    (~_to: string, ~className: string, ~children: React.element) =>
    React.element =
    "Link";
};

/* WIP: StaticQuery. Try to use  from the top level page components in pure JS. Its easier for now */
module StaticQuery = {
  [@bs.module "gatsby"] [@react.component]
  external make: (~query: string, ~children: React.element) => React.element =
    "StaticQuery";
};