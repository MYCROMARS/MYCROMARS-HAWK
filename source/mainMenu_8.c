// on macOS activate:
// #include <stdio.h>

// STRUKTUR MENU 8

// Main function
void mainMenu_8(int *m)
{
    // Output
    printf("\n*** STRUCTURE MENU ***\n");
    printf("Press: (0) EXIT\n");
    printf("Press: (1) STRUCTURE-A | (2) STRUCTURE-B | (3) STRUCTURE-C | (4) STRUCTURE-D\n");
    printf("Press: (5) STRUCTURE-E | (6) STRUCTURE-F | (7) STRUCTURE-G | (8) STRUCTURE-H \n");
    printf("Press: (9) STRUCTURE-I | (10) STRUCTURE-J | (11) STRUCTURE-K\n");
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
                printf("### EXIT STRUCTURE ###\n\n");
                break;

        case 1:
                // Function: Structure A, define int
                structure_a();
                break;

        case 2:
                // Function: Structure B, define short int
                structure_b();
                break;

        case 3:
                // Function: Structure C, structure in structure and char string.
                structure_c();
                break;

        case 4:
                // Function: Structure D, long, float, double
                //structure_d();
                break;

        case 5:
                // Function: Structure E, with array
                //structure_e();
                break;

        case 6:
                // Function: Structure F, copy structure
                //structure_f();
                break;

        case 7:
                // Function: Structure G, pointer of structure variable, sizeof
                //structure_g();
                break;

        case 8:
                // Function: Structure H, with 0 initialize
                //structure_h();
                break;

        case 9:
                // Function: Structure I, typedef
                //structure_i();
                break;

        case 10:
                // Function: Structure J, with pointer
                //structure_j();
                break;

        case 11:
                // Function: Structure K, with pointer pointer
                //structure_k();
                break;

        default:
                // assign
                *m = 0;

                // Output
                printf("### END STRUCTURE ###\n\n");
                break;
    }
} 