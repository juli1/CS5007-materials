# Process and inter-processes communication

## Summary

A process is an independent, isolated entity in the operating system.
The operating system provides some inter-processes communication primitives.

## Constraints

 * Each exercise **must** compile using `make clean all`
 * Each exercise **must** handle and document error cases

## Exercise 1: Signals and Shared Memory

Build a producer/receiver system composed of two processes:

 * the **producer** periodically (every 10 seconds) produces an integer
   and share it with other processes using shared memory.
 * the **consumer** prints the number from the shared memory when receiving a
   signal. It also prints a liveliness message every 30 seconds to show
   that it is alive and running.

**Implementation constraints**: these two processes will be implemented
in the same program (binaries). The creation of each process will be
implemented using `fork()`.


## Exercise 2: Build Your Own Shell (BYOS)

In that exercise, we want to build our own shell. The shell will have
only the following restricted features:

 * execute commands. If the entered command is not a valid one, show
   an error message.
 * exit the shell when the `exit` command is entered

**Requirements**

 * we will ask the user the specify the full path of a binary
 * we inherit the environment from the parent process
 * we support argument passing when invoking `exec` primitives
 * we will not support signals for now

**Bonus points**

 * support arguments
 * not having to enter the full path and support the `PATH` environment variable
