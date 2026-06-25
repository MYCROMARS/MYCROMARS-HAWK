// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/input_a.h"

// Input A

// Main function
void input_a(void)
{
    // Output
    printf("### INPUT A ###\n\n");

    // Assign
    char charInput_a, charInput_b;
    int intInput;
    char u;
    int x = 0;

    // Output
    printf("INPUT int with getchar().\n");
    printf("Input a number, only one sign: ");

    // Input
    getchar();
    intInput = getchar();

    // Output
    printf("Your Input was: %c\n\n", intInput);

    // ----------------------------------------
    // Output
    printf("INPUT char with getchar().\n");
    printf("Input a character, only one sign: ");

    // Input
    getchar();
    charInput_a = getchar();

    // Output
    printf("Your Input was: %c\n\n", charInput_a);
    
    // ------------------------------------------
    // Output
    printf("INPUT with scanf().\n");
    printf("Continue with y: ");

    // Input
    getchar();
    scanf("%c", &charInput_b);

    // Output
    printf("Your Input was: %c\n", charInput_b);
    printf(charInput_b == 'y' ? "right!\n\n" : "wrong!\n");

    // continue with y
    if (charInput_b == 'y')
    {
        // Output
        printf("*** Input a sting ***\n\n");
        printf("INPUT int with getchar() loop.\n");
        printf("Exit with: WIN (ctrl + z & enter) | MAC (controle + z)\n");
        printf("Input some characters: ");

        // getchar() loop
        while(1)
        {
            // Input
            u = getchar();
            if(u == EOF)
            break;

            // Output
            putchar(u);
        }
    }
    else{
        // Output
        printf("Input not correct!\n\n");
    }
}