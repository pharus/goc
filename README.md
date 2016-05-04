# goc

Create a tool similar to the [go toolchain](https://golang.org/cmd/go/), but for C.

Investigated their tools in [https://golang.org/cmd/](https://golang.org/cmd/),
and thinking of expanding the pr

> A tool, if possible and without great sacrifice, should be written in the
> language it is to be used. 

#### In this case, C :D

Requirements, so far:
- get: similar to the clibs tool
- fmt: to be discussed, there's not a single style in C, and it must be context
  aware
	+ Manage dependencies, and add the concept of model. Let us create an
	  universal repo of sys deps, throughout OS's
- more to be established.

Roadmap:
- Planning and requirement analysis
- Let us see what to dev
- Test the hell out of it
- Bliss for an awesome thing been created
- Hack for fun and profit a little more efficient or at least with a cool tool

