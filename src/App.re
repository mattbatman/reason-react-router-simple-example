type route =
  | Home
  | Second
  | Third;

[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();

  <div>
    <Nav />
    {switch (url.path) {
     | [] => <Home />
     | ["second"] => <Second />
     | ["third"] => <Third />
     | _ => <Home />
     }}
  </div>;
};