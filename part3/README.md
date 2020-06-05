# Compiler, Assembly, Libraries

## Summary

A compiler is nothing else than a program translating one language at a
high level of abstraction to another language closer to the machine language.
A library is collection of functions that can be reused.

## Constraints

 * Each exercise **must** compile using `make clean all`
 * Each exercise **must** handle and document error cases

## Exercise 1: Understanding the assembly code

Take back your code from the previous exercise (find the needle
in the haystack). Adapt the code to add debugging flags and disable
all optimizations.

Generate the assembly code from the C code, using either `gcc`
or `objdump`.

Write a function that prints all the location of occurrence
of `needle` within `haystack`.

The function signature is as follow:

```c
void print_occurrences(char* needle, char* haystack);
```

When invoking this function, it will print the exact location(s) of
`needle` in the `haystack`.

**Example**: if `needle` is "foo" and `haystack` is "foobarfoo", the string
"foo" appears twice: once at position 0 and another time at position 6.

Therefore, the program will produce the following output.

```
Occurrence found at position 0
Occurrence found at position 6
```

**To do**: explain the mapping between the assembly code and the C code.
In particular: how are arguments passed? How data is being printed? Any
elements of the stack being used? How the call to `print_occurrences`
is done?

## Exercise 2: Assembly

We want to write a function in assembly that:

 * takes one argument (an integer)
 * returns `1` if the parameter is a prime number, `0` otherwise

**To do**: implement the code in assembly.


## Exercise 3: putting it together

Write a C program that takes one parameter on the command line.
If the parameter is an integer, is call the functions written in assembly
and print a message if the number is a prime number or not.
If the parameter is not an integer, it returns an error code.

**To do**: write a program that integrates the function from exercise 2.
