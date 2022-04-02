#include <stdio.h>
#include <stdlib.h>


/**
 * This is the  function that iterates thro' the array and finds sum
 * 
*/
int findSum()
{
    ///< This is the pointer that points to the array containing data
    int* ptr; 
    int size ;
    int i; 

    ///< Sum of all the array elements will be saved in sum 
    int sum; 

    printf("Enter size of the array: ");
    scanf("%d", &size);
[2022-04-01T17:19:43.881Z] > git remote --verbose [124ms]

    //declare memory dynamicall y
    ptr = (int*)malloc(size * sizeof(int));

    //read array elements
    for (i = 0; i < size; i++) {
        printf("Enter element %02d: ", i + 1);
        scanf("%d", &ptr[i] );
    }
/*
    //print array elements
    printf("\nEntered array elements are:\n");
    for (i = 0; i < size; i++) {
        printf("%d\n", ptr[i]);
    }
*/
    //calculate sum of all elements
    sum = 0; 
    for (i = 0; i < size; i++) {
        sum += ptr[i];
    }
    printf("Sum of array elements is: %d\n", sum);
    //free memory
    // Calculate average of all the elements in array
    int avg1 = sum / size ;
    printf("Average of array elements is: %d\n", avg1);
    
    free(ptr); //MUST free dynamically allocated memory.
    return 0;
}

