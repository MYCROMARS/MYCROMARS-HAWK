// on macOS activate:
// #include <stdio.h>
// #include "../header/loop_b.h"

// on Windows activate:
#include "../header/loop_b.h"

// LOOP B

// Main function
void loop_b(void)
{
    // Output
    printf("### Loop B: For loop 1...7 ###\n\n");

    // assign
    int value_1 = 0;
    const int value_2 = 7;
    int value_3[DEFINE_A] = {10, 20, 30, 40, 50, 60, 70};

    // For loop
    for(value_1=0; value_1<value_2; value_1++){
        // Output
        printf("value [%d]: %d\n",value_1, value_3[value_1]);
    }

    // other spelling
    /*
    int value_4 = 0;
    for( ; value_4<value_2; ){
        printf("value 3: %d\n", value_3[value_4]);
        value_4++;
    }
    */

    // Output
    printf("\n");
} 