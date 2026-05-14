// on macOS activate:
// #include <stdio.h>
// #include "../header/loop_a.h"

// on Windows you can activate this, if it is not working:
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