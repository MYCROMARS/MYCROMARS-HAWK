// if it's not working acivate this:
//#include <stdio.h>
//#include <stdlib.h>
//#include "../header/malloc_b.h"

// Malloc B

// function
int *startMalloc(unsigned int value) {

    // assign Pointer: malloc
    int *pointer = malloc(value*(sizeof(int)));

    //store some data, NULL need stdio.h
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
    
    // assign
    unsigned int value_1 = 0;
    
    // Output
    printf("How many int multiply: ");
    
    // Input
    if (scanf("%u", &value_1) !=1) {
    
        // Output
        printf("! Error !\n\n");
        
        // need: stdlib.h
        return EXIT_FAILURE;
    }
    
    // assign Pointer: function
    int *store = startMalloc(value_1);

    if (store == NULL){
        printf("! Error !\n");
        return EXIT_FAILURE;
    }
    
    // Output
    printf("Output:\n");

    for (unsigned i=0; i<value_1; i++) {
    
        // Output
        printf("store[%u]: %u\n", i, store[i]);
    }
    
    // Output: line break
    printf("\n");

    if (store != NULL) {
    
        // Clear memory
        free(store);
    }

    return EXIT_SUCCESS;
}
