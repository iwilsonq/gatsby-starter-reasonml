// str = "2018-10-27T22:40:32.169Z"
// result = "Sunday, February 17, 2019"

let formatDate = (isoDateString: string) => {
  DateFns.internal_format(Js.Date.fromString(isoDateString), "dddd, MMMM D, YYYY");
};