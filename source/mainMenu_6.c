// if it's not working acivate this:
// #include <stdio.h>

// ARRAY MENU 6

// Main function
void mainMenu_6(int *m)
{
    // Output
    printf("\n*** ARRAY MENU ***\n");
    printf("Press: (0) EXIT\n");
    printf("Press: (1) ARRAY-A | (2) ARRAY-B | (3) ARRAY-C | (4) ARRAY-D\n");
    printf("Press: (5) ARRAY-E | (6) ARRAY-F\n");
    printf("Your input: ");

    // Input
    scanf("%d", m);

    // Output
    printf("\n");

    switch (*m)
    {
        case 0:
                // Exit
                // assign
                *m = 0;
                
                // Output
                printf("### EXIT ARRAY ###\n\n");
                break;

        case 1:
                // Function: Array A, int array []
                array_a();
                break;

        case 2:
                // Function: Array B, int array [] []
                array_b();
                break;

        case 3:
                // Function: Array C, float array [] scanf()
                array_c();
                break;

        case 4:
                // Function: Array D, int array switch number
                array_d();
                break;

        case 5:
                // Function: Array E, int array duplicate numbers
                array_e();
                break;

        case 6:
                // Function: Array F, char array
                array_f();
                break;

        default:
                // assign
                *m = 0;
                // Output
                printf("### END ARRAY ###\n\n");
                break;
    } 
}