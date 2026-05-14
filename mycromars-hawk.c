// MYCROMARS HAWK
// C programming basics
// ALEXANDER RUDI
// (C) All rights reserved 2026 

// header file
#include "header.h"
//#include <windows.h>

// Buffer, assign
char buffer[50];

// Input string delate buffer
void scanString0(void){
    // input
    scanf("%s", &buffer);
}


// Main function
int main()
{
    // Output
    printf("\n");
    printf("***********************\n");
    printf("MYCROMARS HAWK\n");
    printf("C programming basics\n");
    printf("by ALEXANDER RUDI\n");
    printf("(C) All rights reserved 2026\n");
    printf("V 1.0.5\n\n");

    // assign
    int menu = 0;
    int menuB = 0;

    /***MENU***/
    // Go here <---
    mainMenu:

    // Output
    printf("*** MAIN MENU ***\n");
    printf("Press (0) EXIT \n");
    printf("Press (1) CALCULATION | (2) DELAY | (3) INPUT | (4) OUTPUT\n");
    printf("Press (5) Pointer | (6) ARRAY | (7) LOOP | (8) STRUCTURE\n");
    printf("Press (9) MALLOC  | (10) DATA\n");

    printf("Your input: ");

    // Main Menu
    if (scanf("%d", &menu)) {

        // Wrong number (not 1...10)
        if (menu < 0 || menu > 10){
            // Output
            printf("\nInput is not 1...10\n\n");

            // Go here <---
            goto mainMenu;
        }

        switch (menu)
        {
        case 0:
        /* Exit */
        // Function
            mainMenu_0(&menuB);
       
        case 1:
        /* Calculation */
        // Function
            mainMenu_1(&menuB);
            break;

        case 2:
        /* Delay */
        // Function
            mainMenu_2(&menuB);
            break;

        case 3:
        /* Input */
        // Function
            mainMenu_3(&menuB);
            break;

        case 4:
        /* Output */
        // Function
            mainMenu_4(&menuB);
            break;

        case 5:
        /* Pointer */
        // Function
            mainMenu_5(&menuB);
            break;

        case 6:
        /* Array */
        // Function
            mainMenu_6(&menuB);
            break;

        case 7:
        /* Loop */
        // Function
            mainMenu_7(&menuB);
            break;

        case 8:
        /* Structure */
        // Function
            //mainMenu_8(&menuB);
            // break;

        case 9: 
        /* Malloc */
        // Function
            //mainMenu_9(&menuB);
            // break;

        case 10:
        /* Malloc */
        // Function
            //mainMenu_10(&menuB);
            // break;

        default:
        // Output
            printf("Input is not corect\n\n");
            break;
        }
    }
    else {
        // Output
        printf("\nInput is not correct\n\n");

        // Funktion: delate/ catch buffer
        scanString0();

        // Go here <---
        goto mainMenu;
    }

    // assign
    menu = 0;
    menuB = 0;

    // goto start
    goto mainMenu;
}
