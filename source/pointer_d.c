// if it's not working acivate this:
// #include <stdio.h>
// #include "../header/pointer_d.h"

// POINTER D

// Main function
void pointer_d(int *pointer){

    // Output
    printf("### POINTER D: Address of int to function ###\n\n");
    printf("Pointer: %d\n", *pointer);

    // assign
    *pointer = 0;

    // Output
    printf("Pointer reset: %d\n", *pointer);
} 