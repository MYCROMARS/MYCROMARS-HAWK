// Main Menu 3: INPUT 

// Main function
void mainMenu_3(int *m)
{
    // Output
    printf("\n*** INPUT MENU ***");
    printf("Press: (0) EXIT | (1) INPUT-A | (2) INPUT-B\n");
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
                printf("### EXIT Input ###\n\n");
                break;

        case 1:
                // Function: Input A, int, Character, while: char
                input_a();
                break;

        case 2:
                // Function: Input B, some numbers, Catch invalid input 
                input_b();
                break;

        default:
                // Assign
                *m = 0;

                // Output
                printf("### END Input ###\n\n");
                break;
    }
}