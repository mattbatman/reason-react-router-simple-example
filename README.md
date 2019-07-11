# ReasonReact Routing Simple Example

This is intended to be the simplest possible ReasonReact router example. The other simple examples ([Routing in ReasonReact by Kyle Henderson](https://medium.com/@Hehk/routing-in-reasonreact-d512fdc81b63) or [Routing in ReasonReact by A. Sharif](https://medium.com/@sharifsbeat/routing-in-reasonreact-4517acaf2c8)) I found seemed to be from the pre-React Hooks era.

You'll find the following ReasonReact files:

1. `Index.re` - renders `<App />` to `#root`
2. `App.re` - uses `ReasonReactRouter.useUrl()` to display the correct page
3. `Home.re` - Renders text of "Home page"
4. `Second.re` - Renders text of "Second page"
5. `Third.re` - Renders text of "Third page"
6. `Nav.re` - Contains a list of links to each page
7. `Link.re` - A component that makes use of `ReasonReactRouter.push()` on the clicked link

You can see the deployed GitHub Pages page [here](https://mattbatman.github.io/reason-react-router-simple-example/).

See the [ReasonReact readme](https://github.com/mattbatman/reason-react-router-simple-example/blob/master/reason-react-readme.md) for the commands to build the project.
