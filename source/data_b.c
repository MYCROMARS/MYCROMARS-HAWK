// on macOS activate:
// #include <stdio.h>
// #include <stdlib.h>
// #include "../header/data_b.h"

// Data B

// Main function
void data_b(void)
{
    // Output
    printf("### DATE B: File open/create for writing/overwriting. ###\n\n");
    
    // assign
    int value_1 = 100;
    
    // typedef, create a pointer
    FILE *save;
    
    // Open file
    save = fopen("save.dat", "w");

    if(save == NULL)
    {
        // Output
        puts("! error !");
        // Exit
        exit (EXIT_FAILURE);
    }
    else{
        // Output
        puts("! successful !");
        
        // save
        fprintf(save, "%d", value_1);
        
        // close
        fclose(save);
        
        // Output
        puts("File closed.\n");
    }
} 