// DELAY MENU 2

// Main function
void mainMenu_2(int *m)
{
    // assign
    int value = 0;

    // Output
    printf("\n### DELAY A ###\n");
    printf("Input a number (for example 1000): ");

    // Input
    scanf("%d", &value);

    // Function: Delay A
    delay_a(value);
    
    // assign
    value = 0;
}