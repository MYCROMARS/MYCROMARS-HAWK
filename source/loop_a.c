// if it's not working acivate this:
// #include <stdio.h>
// #include "../header/loop_a.h"

// on Windows activate:
#include "../header/loop_a.h"

// LOOP A
// Main function
void loop_a(void)
{
    // Output
    printf("### Loop A: While loop 1...12 ###\n\n");

    // assign
    int value = 1;

    // loop
    while(value <= DOZEN)
    {
        // Output
        printf("value: %d\n", value);
        // assign
        value++;
    }

    // Output
    printf("\n");
}