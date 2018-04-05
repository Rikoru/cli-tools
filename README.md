# cli-tools
A variety of command-line tools

### What does it currently do?
* It allows for the transmutation of text into interesting(?) shapes
* If ran with no arguments, (ie. `./cli-tools`) it will output the help.
* Using `./cli-tools -h` will also print the help, for completeness.

### Roadmap
* A user will be able to save time doing silly things

### What are some example use-cases?
#### transmute wrap-box
A user wants to create a box of text, like so:
```
T E S T
E S T T
S T T E
T T E S
```
* This becomes inconvenient to do manually for larger sized boxes
* Can be done with `./cli-tools -Tw 'TEST'` or `./cli-tools --transmute -w 'TEST'`

##usage:
cli-tools {-T | --transmute} [options] <input>
options:
  -l, --lower = Sets more to lower for applicable transmutations.
  -g = Creates a gradient of the given input.
  -w = Creates a wrapped box of the given input.
  -r = Creates a left-ended right-angle of the input.

