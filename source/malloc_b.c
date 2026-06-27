// if it's not working acivate this (on macOS):
#include <stdio.h>
#include <stdlib.h>
//#include "../header/malloc_b.h"

// Malloc B

// function
int *startMalloc(unsigned int value) {

    // Assign Pointer: malloc
    int *pointer = malloc(value*(sizeof(int)));

    // store some data, NULL need stdio.h
    if(pointer !=NULL) {
        for (unsigned int i=0; i<value; i++) {
            
            // assign
            pointer[i] = i*i;
        }

        // test pointer value
        //printf("pointer: %d\n", pointer);
        //printf("Address pointer: %d\n", &pointer);
        //printf("*pointer: %d\n", *pointer);
        //printf("pointer[0]: %d\n", pointer[0]);
        //printf("pointer[1]: %d\n", pointer[1]);
    }

    // Output
    printf("sizeof int: %ld\n", sizeof(int));
    printf("sizeof int * %d: %ld\n\n", value, value * sizeof(int));

    return pointer;
}

// Main function
void malloc_b(void)
{
    // Output
    printf("### Malloc B: with input ###\n\n");
    
    // Assign
    unsigned int value_1 = 0;
    
    // Output
    printf("How many int multiply: ");
    
    // Input
    if (scanf("%u", &value_1) !=1) {
    
        // Output
        printf("! Error !\n\n");

        exit(EXIT_SUCCESS);
    }
    
    // Assign Pointer: Function: With transfer
    int *store = startMalloc(value_1);

    if (store == NULL){
        printf("! Error !\n");
        exit(EXIT_SUCCESS);
    }
    
    // Output
    printf("Output:\n");

    // For loop
    for (unsigned i=0; i<value_1; i++) {
    
        // Output
        printf("store[%u]: %u\n", i, store[i]);
    }
    
    // Output:
    printf("\nMALLOC END\n");

    if (store != NULL) {
    
        // Clear memory
        free(store);
    }

    exit(EXIT_SUCCESS);
}
