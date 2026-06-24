// if it's not working acivate this:
// #include <stdio.h>
// #include "../header/loop_d.h"

// LOOP D

// Main function
void loop_d(void){
    // Output
    printf("### Loop D: For loop in a for loop ###\n\n");

    // Assign
    int value_1;
    char letter;

    // Output
    puts("Grid 3x3");

    // Columns
    for(value_1=1; value_1<=3; value_1++){

        // Rows
        for(letter='A'; letter<='C'; letter++)
        {
            // Output
            printf("%d%c ", value_1, letter);
        }
        // Output
        putchar('\n');
    }

    // Output
    printf("\n");
} 