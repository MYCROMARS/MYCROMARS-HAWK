// INPUT MENU 3

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
                *m = 0;
                printf("### EXIT Input ###\n\n");
                break;

        case 1:
                // Function: Input A, int, Character, while: char
                input_a();
                break;

        case 2:
                // Function: Input B, some numbers, check if it is correct
                input_b();
                break;

        default:
                *m = 0;
                printf("### END Input ###\n\n");
                break;
    }
}