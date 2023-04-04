# TRAVELLER's TRANSPILER

This transpiler converts the syntax of <a href="https://esolangs.org/wiki/Super_Stack!">super stack</a> esolang into the <a href="https://iitk-traveller-docs.netlify.app">iitk traveller</a> esolang. It is written in C++ the source file of which can be found in transpiler directory.

The implementation of each of the operations of super stack in IITK Traveller's code can be found in the traveller code directory.

## USAGE

Compile the transpiler
```
bash compiler.sh
```

Write the super stack code in test.txt file and pass its name as an argument to the transpiler executable.
```
./transpiler test.txt
```
The output will be dumped in output.txt

Now run this code in the following IDE: <a href="https://traveller.pclub.in/">IITK Traveller</a>