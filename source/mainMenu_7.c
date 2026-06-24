// if it's not working acivate this:
// #include <stdio.h>

// Main Menu 7: LOOP 

// Main function
void mainMenu_7(int *m)
{
    // Output
    printf("\n*** LOOP MENU ***\n");
    printf("Press: (0) EXIT\n");
    printf("Press: (1) LOOP-A | (2) LOOP-B | (3) LOOP-C | (4) LOOP-D\n");
    printf("Press: (5) LOOP-E | (6) LOOP-F | (7) LOOP-G\n");
    printf("Your Input: ");

    // Input
    scanf("%d", m);

    // Output
    printf("\n");

    switch (*m)
    {
        case 0:
                // Exit
                // Assign
                *m = 0;

                // Output
                printf("### EXIT LOOP ###\n\n");
                break;

        case 1:
                // Function: Loop A, wgile loop
                loop_a();
                break;

        case 2:
                // Function: Loop B, for loop
                loop_b();
                break;

        case 3:
                // Function: Loop C, for loop,  time.h
                loop_c();
                break;

        case 4:
                // Function: Loop D, for loop in for loop
                loop_d();
                break;

        case 5:
                // Function: Loop E, for loop in for loop
                loop_e();
                break;

        case 6:
                // Function: Loop F, for loop
                loop_f();
                break;

        case 7:
                // Function: Loop G, while loop
                loop_g();
                break;

        default:
                // Assign
                *m = 0;

                // Output
                printf("### END LOOP ###\n\n");
                break;
    }


}