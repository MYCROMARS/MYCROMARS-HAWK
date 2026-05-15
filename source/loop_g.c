// on macOS activate:
// #include <stdio.h>
// #include "../header/loop_g.h"

// LOOP G

// Main function
void loop_g(void)
{
    // Output
    printf("### Loop G: For loop: 9x two int ###\n\n");

    // assign
    int x, y;
    x = y = 0;
    
    // While loop
    while(y<=9)
    {
        printf("x= %d y= %d\n", x, y);
        x++;
        y++;
    }

    // Output
    printf("\n");
} 