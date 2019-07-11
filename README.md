# ReasonReact Routing Simple Example

This is intended to be the simplest possible ReasonReact router example.

You'll find the following ReasonReact files:

1. `Index.re` - renders `<App />` to `#root`
2. `App.re` - uses `ReasonReactRouter.useUrl()` to display the correct page
3. `Home.re` - Renders text of "Home page"
4. `Second.re` - Renders text of "Second page"
5. `Third.re` - Renders text of "Third page"
6. `Nav.re` - Contains a list of links to each page
7. `Link.re` - A component that makes use of `ReasonReactRouter.push()` to on the clicked link
