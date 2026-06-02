// if it's not working acivate this:
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include "../header/structure_k.h"

// activate in function start() system("clear")

// Structure K

// typedef
typedef struct house_1
{
    int value_1;
    char text_1[255];
    char text_2[255];
} kh1_datatype;

// Function
void start()
{
    // on Windows: Clear screen
    system("cls");

    // on macOS: Clear screen
    //system("clear");

    // Output
    printf("To start Press 'y'\n");
    printf("Input: ");
}

// Function
void input(kh1_datatype kh1_apartment_1b)
{
    char text_3[20];

    // Output
    printf("\n%s\n", kh1_apartment_1b.text_1);
    printf("Your Answer: ");

    // Input
    scanf("%s", &text_3[0]);

    // Compare, at 0 they are equal
    if(strcmp(kh1_apartment_1b.text_2, text_3) == 0)
    {
        printf("!! right !!\n\n");
    }
    else
    {
        printf("! wrong !\n\n");
    }
}

// Main function
void structure_k(void)
{
    // Output
    printf("### Structure K: with input, compare string ###\n\n");

    // Struct: Directory (declaration), assign
    kh1_datatype kh1_apartment_1 = {1, "What is the name of the red planet?", "Mars"};
    
    // Function
    start();
    
    // input
    getchar();
    if(getchar() == 'y'){
        // Function
        input(kh1_apartment_1);
    }
    else{
        printf("! wrong !\n\n");
    }
} 