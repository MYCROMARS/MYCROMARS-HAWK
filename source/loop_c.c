// if it's not working acivate this:
// #include <stdio.h>
// #include "../header/loop_c.h"

// LOOP C

// Main function
void loop_c(void)
{
    printf("### Loop C: For loop, sunday's in july 2025 ###\n\n");

    // Assign: 1. Sunday: 6. July 2025
    int sunday = 6;
    int value_1;

    for(value_1=1; sunday<32; value_1++, sunday+=7){
        // Output
        printf("%d. Sunday: %d\n", value_1, sunday);
    }

    // Output
    printf("\n");
}