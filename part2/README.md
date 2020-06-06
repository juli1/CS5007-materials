# Fun with C

## Summary

C is a major programming language. Learning C will make you understand
better how computers work. This is one of the most low-level language
and is used to write the operating systems you use every day.

Find below the list of exercises to do related with the second class.


## Constraints

 * Each exercise **must** compile using `make clean all`
 * Each exercise **must** handle and document error cases

## Exercise 1: Find the needle in a haystack

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

**To do**: implement the function `print_occurrences`


## Exercise 1.5: returning the result

We now want to return the list of occurrence instead of printing them
in the function.

```c
int print_occurrences(char* needle, char* haystack, int* occurrences, int max_occurrences);
```

The argument `occurrences` will contain the result with all the occurrences.

The function will return the number of occurrences. It will return -1 if there
is an error.

**To do**: implement the new function and explain what are the potential error cases.


## Exercise 3: implement a linked list

Implement a set of function to implement a linked list of integer.
The list is ordered, which means that all nodes are ordered in an increasing order.
You will need to define the following elements:

 * A `struct` that represent a node of your linked_list (already provided)
 * A function `add_node` that adds a new node into the linked list
 * A function `remove_value` that removed the value in parameter from the linked list.
 * A function `print_linked_list` that prints the linked list

**Hint**: the file `linkedlist.c` should help you.

**To do**: implement the functions mentioned above.


There is a program you can use to validate your results 
(note: `init_node()` is a program to initialize a node with a value).

```c
int main() {
    node_t* linked_list;
    node_t* node = (node_t*) malloc(sizeof(node_t));
    init_node(node, 1);
    linked_list = node;
    linked_list = add_node(linked_list, 0);
    print_linked_list(linked_list);
    printf("-----\n");
    linked_list = add_node(linked_list, 5);
    print_linked_list(linked_list);
    printf("-----\n");
    linked_list = add_node(linked_list, 0);
    print_linked_list(linked_list);
    printf("-----\n");
    linked_list = add_node(linked_list, 36);
    print_linked_list(linked_list);
    printf("-----\n");
    linked_list = remove_value(linked_list, 10);
    print_linked_list(linked_list);
    printf("-----\n");
    linked_list = remove_value(linked_list, 36);
    print_linked_list(linked_list);
    printf("-----\n");
    linked_list = remove_value(linked_list, 0);
    print_linked_list(linked_list);
    printf("-----\n");
    linked_list = remove_value(linked_list, 1);
    print_linked_list(linked_list);
    printf("-----\n");
}
```

This is the output

```
value = 0
value = 1
-----
value = 0
value = 1
value = 5
-----
value = 0
value = 0
value = 1
value = 5
-----
value = 0
value = 0
value = 1
value = 5
value = 36
-----
value = 0
value = 0
value = 1
value = 5
value = 36
-----
value = 0
value = 0
value = 1
value = 5
-----
value = 0
value = 1
value = 5
-----
value = 0
value = 5
-----

```

## Resources

 * [Bash Guide for Beginners](http://tldp.org/LDP/Bash-Beginners-Guide/html/)
