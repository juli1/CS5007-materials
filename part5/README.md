# File and I/O

## Summary

Files are managed between the user land and kernel land using
file descriptors. Resources are then abstracted using different methods,
either via open/read/write/close functions or fopen/fread/fwrite/fclose
functions.

## Constraints

 * Each exercise **must** compile using `make clean all`
 * Each exercise **must** handle and document error cases

## Exercise: Implement your own FILE* structure

As discussed during the class, the `FILE*` notation is built on top
of the low-level primitives `open`, `read`, `write` and `close`.

In this exercise, we want to implement our own `FILE*` structure
and more generally, implement all the functions to manipulation files.
In the interest of time, we will limit the scope.

Scope for this delivery:

 1. Define your own implement of the `FILE*` structure called `CS5007FILE*`
 2. Define `CS5007FILE* cs5700_fopen(const char* filename, const char* mode)`: similar behavior than `fopen()`
 3. Define `int cs5700_fclose(CS5007FILE* f)`: similar behavior than `fclose()`
 4. Define `size_t cs5700_fread(void* ptr, size_t size, size_t nmemb, CS5007FILE* f)`: similar behavior than `fread()`
 5. Define `size_t cs5700_fwrite(void* ptr, size_t size, size_t nmemb, CS5007FILE* f)`: similar behavior than `fwrite()`


## Bonus

This gives bonus points in case you want to go beyond the initial requirements.

 1. Define `int fprintf(const char* filename, const char* mode)`: similar behavior than `fprintf()`
 2. Define `int fscanf(CS5007FILE* f, const char* format, ...)`: similar behavior than `fscanf()`
