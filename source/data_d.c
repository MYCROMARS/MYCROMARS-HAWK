// on macOS activate:
// #include <stdio.h>
// #include <stdlib.h>
// #include "../header/data_d.h"

// on Windows activate:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Data D

// Main function
void data_d(void)
{
    // Output
    printf("### DATE D: File open for write, reading. ###\n\n");
    
    // assign
    char text_1[] = "Hello";
    
    // typedef
    FILE *save;
    
    // file open
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
        fprintf(save, "%s", text_1);
        
        // Output
        printf("text 1: %s\n", text_1);
        
        // close
        fclose(save);
        
        // Output
        puts("File closed.\n");
    } 

    // ### Read file

    // define
    char text_2[20];
    
    // assign
    int readCount = 0;
    
    // for testing, assign
    // strcpy(text_2,"Hello");
    
    // typedef
    FILE *read;
    
    // open
    read = fopen("save.dat", "r");
    
    if(read == NULL)
    {
        // Output
        puts("! error !");
        
        // Exit
        exit (EXIT_FAILURE);
    }
    else
    {
        // Output
        puts("!! successful !!");
        
        // read
        while (fscanf(read, "%s", &text_2[0]) !=EOF)
        {
            readCount++;
        }

        // Output
        printf("read char 0: %c\n", text_2[0]);
        printf("read text: %s\n", text_2);
        printf("readCount: %d\n", readCount);
        
        // close
        fclose(read);
        
        // Output
        puts("File closed.\n");
    }
}