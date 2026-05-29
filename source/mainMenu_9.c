// on macOS activate:
// #include <stdio.h>

// MALLOC MENU 9

// Main function
void mainMenu_9(int *m)
{
    // Output
    printf("\n*** MALLOC MENU ***\n");
    printf("Press: (0) EXIT\n");
    printf("Press: (1) MALLOC-A | (2) MALLOC-B\n");
    printf("Your Input: ");

    // Input
    scanf("%d", m);

    // Output
    printf("\n");

    switch (*m)
    {
        case 0:
                // assign
                *m = 0;

                // Output
                printf("### EXIT MALLOC ###\n\n");
                break;

        case 1:
                // Function: Malloc A, storage for 100 int-Type's
                malloc_a();
                break;

        case 2:
                // Function: Malloc B, storage reservation
                malloc_b();
                break;

        default:
                // assign
                *m = 0;

                // Output
                printf("### END MALLOC ###\n\n");
                break;
    }
} 