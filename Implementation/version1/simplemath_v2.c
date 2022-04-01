#include <stdio.h>
#include <stdlib.h>
#include "../unity/unity.h"

int add_elements(int size, int* ptr )
{
    int i; 
    int sum; 
    
    //print array elements
   /* printf("\nEntered array elements are:\n");
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
      
     // Calculate average of all the elements in array
    int avg1 = sum / size ;
    printf("Average of array elements is: %d\n", avg1);
    
    return sum ;
}

void manual_test_add_elements()
{
    // create an array and initialize it 
   int p[] = {11,22,33} ;
   int len = sizeof(p) / sizeof(int) ;

   // sizeof p gives 6 ,2 byte of memory for each integer
   printf("array len is %d" , len) ;

// test1 - for positive elements
    if(66 == add_elements(len,p))
        printf("Sum function works for positive numbers \n");
    else 
        printf("Sum function is not working for positive numbers\n");

 //test2 - for zero elements 
    int p1[] = {0,0,0} ;
    if(0 == add_elements(len,p1))
        printf("Sum function works\n");
    else 
        printf("Sum function is not working\n");
    
    // test3 - for negative elements

    int q[] = {-10,-20,-30} ;
    if(-30 == add_elements(len,q))
        printf("Sum function works for negative numbers\n");
    else 
        printf("Sum function is not working for negative numbers\n");
        
}
