// on macOS activate:
// #include "../header/delay_a.h"

// Delay A

// Main function 
void delay_a(double value_1)
{
    // assign
    int menu = 0;
    double value_2 = 1;
    double step = 100;
    int counter = 1;
    int multiplier = 10000;

    // Output: Print Timer size
    printf("Multiplier: %.d\n", multiplier);

    // Timer ^UP
    value_1 *= multiplier;

    // Output
    printf("Delay size: %.0f\n\n", value_1);

    // *--- Menu B ---*
    // Output
    printf("Press: (0) EXIT | (1) START\n");
    printf("Your Input: ");

    // Input
    scanf("%d", &menu);

    // Output: line break
    printf("\n");

    if (menu == 1){
        // Output
        printf("*** DELAY START ***\n");

        // Timer
        while (value_2 < value_1){
            value_2++;

            // Print every Step: 100
            if (value_2 == counter * step)
            {
                printf("Delay: %f\n", value_2);
                counter++;
            }
        }
        printf("\n");
    }
    else if (menu == 0){
        // Output
        printf("### Exit Delay ###\n\n");
    }
    else {
        // Output
        printf("### End Delay ###\n\n");
    }
}