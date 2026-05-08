// on macOS acitvate:
// #include <stdio.h>

// OUTPUT MENU 5

// Main function
void mainMenu_5(int *m)
{
    // Output
    printf("\n*** POINTER MENU ***\n");
    printf("Press: (0) EXIT\n");
    printf("Press: (1) POINTER-A | (2) POINTER-B | (3) POINTER-C | (4) POINTER-D\n");
    printf("Press: (5) POINTER-E | (6) POINTER-F \n");
    printf("Your Input: ");

    // Input
    scanf("%d", m);

    // Output
    printf("\n");

    // create
    int value_1;
    int value_2;
    int value_3;
    int value_4;

    switch (*m)
    {
        case 0:
                // Exit

                // assign
                *m = 0;

                // Output
                printf("### EXIT Pointer ###\n\n");
                break;

        case 1:
                // Function: Pointer A, int
                pointer_a();
                break;

        case 2: 
                // Function: Pointer B, array
                pointer_b();
                break;
        
        case 3: 
                // Function: Pointer C, array
                pointer_c();
                break;

        case 4: 
                // assign
                value_1 = 1234567;

                // Function: Pointer D, address of int to function
                pointer_d(&value_1);

                // Output
                printf("Int value 1: %d\n\n", value_1);
                break;
        
        case 5:
                // assign
                value_2 = 7;

                // assign: Address of int to pointer
                int *pointer_1 = &value_2;

                // Function: Pointer E, address of pointer to function
                //pointer_e(pointer_1);

                // Output
                printf("Int value 2: %d\n\n", value_2);
                break;
    }
}   