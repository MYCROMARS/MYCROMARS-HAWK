// if it's not working acivate this:
// #include <stdio.h>
// #include "../header/loop_e.h"

// LOOP E

// Main function
void loop_e(void){
    printf("### Loop E: For loop: Sort value 1...7 ###\n\n");

    // Assign
    const int value_1 = 7;
    int value_2[7] = {7, 6, 5, 4, 3, 2, 1};
    int x, y, storeage;

    // Output
    printf("original:\n");

    for(x=0; x<value_1; x++){
        printf("%d ", value_2[x]);
    }

    printf("\n\n");

    // Loop 7 times
    for(x=0; x<value_1; x++){

        // Loop 6 times
        for(y=x+1; y<value_1; y++){

            // Compare and sort
            if (value_2[x] > value_2[y]){
                storeage = value_2[x];
                value_2[x] = value_2[y];
                value_2[y] = storeage;
            }
        }
    }

    // Output
    printf("sorted:\n");
    
    for(x=0; x<value_1; x++){
        printf("%d ", value_2[x]);
    }

    printf("\n\n");
}
