// if it's not working acivate this (on macOS):
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
// #include "../header/data_b.h"

// Data B

// Main function
void data_b(void)
{
    // Output
    printf("### DATE B: File open/create for writing/overwriting. ###\n\n");
    
    // Create & assign
    int value_1 = 100;
    
    // Create a pointer
    // need <stdio.h> 
    FILE *save;
    
    // Open file
    save = fopen("save.dat", "w");

    if(save == NULL)
    {
        // Output
        puts("! error !");
        
        // Exit
        // need <stdlib.h> 
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