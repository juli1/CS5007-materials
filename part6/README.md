# Concurency

## Summary

Threads lets you run code in parallel. Semaphores, barriers and mutexes
lets you synchronize threads for resources access.

## Constraints

 * Each exercise **must** compile using `make clean all`
 * Each exercise **must** handle and document error cases

## Exercise 1: Producer/consumer

Write a program composed of two threads:

 - **Producer thread**: activated periodically every second and update the counter
 - **Consumer thread**: activated once the producer thread updated the counter

The `counter` is a variable shared between both threads. This is an `int`
that is incremented at each activation of the producer thread.

**TODO**: implement this program.

**Constaints**

 - Consumer threads must start before the producer
 - The producer must show each new value only once
 - The consumer must show each new value only once

## Exercise 2: Producer/consumer multiple threads

This exercise is a follow-up of the previous one. We now want to write
a program composed of N threads:

 - **One producer thread** periodically (every X second with X between 2 and 6) updates
   the counter (increment the counter by one at each activation) Y times.
 - **`N - 1` receiver threads** that wait for the a result. When the counter is updated,
   **only one thread activates and show the results**.

**TODO**: implement this program.

**Constaints**

 - Consumer threads must start before the producer
 - The producer must show each new value only once
 - The consumer must show each new value only once


## Exercise 3: Producer/consumer multiple threads and broadcast

This exercise is a follow-up of the previous one. We now want to write
a program composed of N threads:

 - **One producer thread** periodically (every X second with X between 2 and 6) updates
   the counter (increment the counter by one at each activation)
 - **`N - 1` receiver threads** activates once the producer thread completes and **all
   threads print the produced value**.


**TODO**: implement this program.

**Constaints**

 - Consumer threads must start before the producer
 - The producer must show each new value only once
 - All consumers must show each new value only once
