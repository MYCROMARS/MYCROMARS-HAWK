#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    printf("2024...2026\n");
    printf("V 1.0.4\n");

    // assign
    int menu = 0;
    int menuB = 0;

    /***MENU***/
    // Go here <---
    mainMenu:

    // Output
    printf("*** MAIN MENU ***");
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
            //mainMenu_0(&menuB);
       
        case 1:
            /* Calculation */
            // Function
            //mainMenu_1(&menuB);

        case 2:
            /* Calculation */
            // Function
            //mainMenu_1(&menuB);


            break;
        
        default:
            break;
        }
    }



}
