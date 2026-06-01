// on macOS activate:
// #include <stdio.h>

// on Windows activate:
//#include <stdio.h>
#include <stdlib.h>

// DATA MENU 10

// Main function
void mainMenu_10(int *m)
{
    // Output
    printf("\n*** DATA MENU ***\n");
    printf("Press: (0) EXIT\n");
    printf("Press: (1) DATA-A | (2) DATA-B | (3) DATA-C | (4) DATA-D\n");
    printf("Press: (5) DATA-E | (6) DATA-F | (7) DATA-G\n");
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
                printf("### EXIT DATA ###\n\n");
                break;
        case 1:
                // Function: Data A, file successfully opened/created for writing to end of file.
                data_a();
                break;

        case 2:
                // Function: Data B, file successfully opened/created for writing/overwriting.
                data_b();
                break;

        case 3:
                // Function: Data C, file successfully opened for reading integer.
                data_c();
                break;

        case 4:
                // Function: Data D, file successfully opened for reading string.
                data_d();
                break;

        case 5:
                // Function: Data E, file successfully opened for reading 2 strings.
                data_e();
                break;

        case 6:
                // Function: Data F, file successfully opened for reading int Array.
                data_f();
                break;

        case 7:
                // Function: Data G, file successfully opened for reading int Array.
                data_g();
                break;

        default:
                // assign
                *m = 0;
                // Output
                printf("### END DATA ###\n\n");
                break;
    }
} 