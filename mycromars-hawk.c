// MYCROMARS HAWK V 1.0.5
// C programming basics
// ALEXANDER RUDI
// MYCROMARS 2024 ... 2026
// Licensed: GNU General Public License v3.0

// header file
#include "header.h"

// useful:
//#include <windows.h>

// Create & assign (initialize)
char buffer[50];

// Catch invalid input
void scanString0(void){
    // Input
    scanf("%s", &buffer);
}

// Main function
int main(void)
{
    // Output
    printf("\n");
    printf("***********************\n");
    printf("MYCROMARS HAWK V 1.0.5\n");
    printf("C programming basics\n");
    printf("ALEXANDER RUDI\n");
    printf("MYCROMARS 2024 ... 2026\n");
    printf("Licensed: GNU General Public License v3.0\n");

    // Create & assign (initialize)
    int menu = 0;
    int menuB = 0;

    // MAIN MENU, go here 
    mainMenu:

    // Output
    printf("\n*** MAIN MENU ***\n");
    printf("Press (0) EXIT \n");
    printf("Press (1) CALCULATION | (2) DELAY | (3) INPUT | (4) OUTPUT\n");
    printf("Press (5) Pointer | (6) ARRAY | (7) LOOP | (8) STRUCTURE\n");
    printf("Press (9) MALLOC  | (10) DATA\n");

    printf("Your input: ");

    // Input
    if (scanf("%d", &menu)) {

        // Wrong number, not 1...10
        if (menu < 0 || menu > 10){
            // Output
            printf("\nInput is wrong, not 1...10\n\n");

            // Go here 
            goto mainMenu;
        }

        switch (menu)
        {
            case 0:
                    /* Function: Exit */
                    mainMenu_0(&menuB);
        
            case 1:
                    /* Function: Calculation */
                    mainMenu_1(&menuB);
                    break;

            case 2:
                    /* Function: Delay */
                    mainMenu_2(&menuB);
                    break;

            case 3:
                    /* Function: Input */
                    mainMenu_3(&menuB);
                    break;

            case 4:
                    /* Function: Output */
                    mainMenu_4(&menuB);
                    break;

            case 5:
                    /* Function: Pointer */
                    mainMenu_5(&menuB);
                    break;

            case 6:
                    /* Function: Array */
                    mainMenu_6(&menuB);
                    break;

            case 7:
                    /* Function: Loop */
                    mainMenu_7(&menuB);
                    break;

            case 8:
                    /* Function: Structure */
                    mainMenu_8(&menuB);
                    break;

            case 9: 
                    /* Function: Malloc */
                    mainMenu_9(&menuB);
                    break;

            case 10:
                    /* Function: Malloc */
                    mainMenu_10(&menuB);
                    break;

            default:
                    // Output
                    printf("Input is not a number 1...10\n\n");
                    break;
        }
    }
    else {
        // Output
        printf("\nInput is not a number\n\n");

        // Funktion: Catch invalid input
        scanString0();

        // Jump to start
        goto mainMenu;
    }

    // Assign (initialize)
    menu = 0;
    menuB = 0;

    // Jump to start
    goto mainMenu;
}
