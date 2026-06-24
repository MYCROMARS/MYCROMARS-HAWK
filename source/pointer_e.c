// if it's not working acivate this:
// #include <stdio.h>
// #include "../header/pointer_e.h"

// POINTER E

// Main function
void pointer_e(int *pointer){

    // Output
    printf("### POINTER E: Address of pointer to function (a) ###\n\n");
    printf("Pointer: %d\n", *pointer);

    // Assign
    *pointer = 0;

    // Outputs
    printf("Pointer reset: %d\n", *pointer);
} 