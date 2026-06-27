// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/pointer_c.h"

// POINTER C

// Main function
void pointer_c(void)
{
    // Output
    printf("### POINTER C: Pointer of array, for loop ###\n\n");

    printf("value[7]: 1, 2, 3, 4, 5, 6, 7\n");
    printf("Pointer = value\n");
    printf("For loop x < 7:\n\n");

    // create: Array
    int value[7] = {1, 2, 3, 4, 5, 6, 7};

    // create: int & Pointer
    int x, *pointer;

    // Assign: Address of array to pointer
    pointer = value;

    // For loop
    for (x=0; x<7; x++)
    {
        printf("*pointer %d: %d\n",x ,*pointer);
        pointer++;
    }
    
    // Output: line break
    printf("\n");
}