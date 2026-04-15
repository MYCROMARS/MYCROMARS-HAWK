// on macOS activate:
// #include <stdio.h>
// #include "../header/input_b.h"

// Input A

// Input char for buffer, that is not a number
char value_2[50];

// Input string delate buffer
void scanString(void){
    scanf("%s", &value_2[0]);
    //printf("b: %s \n", value_2);
}

// Main function
void input_b(void)
{
    // Output
    printf("### INPUT B ###\n\n");

    // assign
    int value_1;

    // Go here <<<---
    start:

    // Output
    printf("Input a number: ");

    // input
    if (scanf("%d", &value_1)) {
        // Output
        printf("Your input was: %d\n", value_1);
        printf("Input is correct.\n\n");
    }
    else{
        // Output
        //printf("\nYour input: %d\n", value_1);
        printf("Input is not a number!\n\n");

        // delate buffer
        scanString();
        
        // Go here <<<---
        goto start;
    }
}