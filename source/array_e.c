// if it's not working acivate this:
// #include <stdio.h>
// #include "../header/array_e.h"

// ARRAY E

// Main function
void array_e(void)
{
    // Output
    printf("### Array E: Duplicate value 1...7 ###\n\n");

    // assign
    int value[7] = {1, 2, 3, 4, 5, 6, 7};
    int duplicate[7];
    int x;

    // Duplicate
    for(x=0; x<7; x++)
    duplicate[x] = value[x];

    // Output
    puts("Values:");

    // For loop
    for(x=0; x<7; x++)
    printf("Value #%d %d = duplicate = %d\n", x, value[x], duplicate[x]);

    // Output
    printf("\n");
} 