// on macOS activate:
// #include <stdio.h>
// #include <stdlib.h>
// #include "../header/data_a.h"

// Data A

// Main function
void data_a(void)
{
    // Output
    printf("### DATE A: File open/create for writing to end of file. ###\n\n");
    
    // assign
    int value_1 = 700;
    
    // typedef, create a pointer
    FILE *save;
    
    // file open, the file will be created even if it doesn’t exist.
    save = fopen("save.dat", "a");

    if(save == NULL)
    {
        // Output
        puts("! error !");
        // Exit
        exit (EXIT_FAILURE);
    }
    else
    {
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