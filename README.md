# cli-tools
A variety of command-line tools

### What does it currently do?
* It compiles
* It exists

### What will it do, eventually?
* It will mess around with text
* A user will be able to save time doing silly things

### What are some example use-cases?
#### transmute wrap-box
A user, for whatever reason, wants to create a box of text, like so:
```
T E S T
E S T T
S T T E
T T E S
```
* This becomes inconvenient to do manually for larger sized boxes
* Can be done with `./cli-tools -Tb 'TEST'` or `./cli-tools --transmute --wrap-box 'TEST'`
