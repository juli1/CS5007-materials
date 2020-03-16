#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char* argv[], char** arge){
   printf("This program has %d arguments\n", argc);
   for(int i = 0 ; i < argc ; i++) {
       printf("argument %d -> %s\n", i, argv[i]);
   }

   printf("Printing environment\n");
   for(int i = 0 ; arge[i] ; i++) {
       printf("environment %d -> %s\n", i, arge[i]);
   }
   return (EXIT_SUCCESS);
}
