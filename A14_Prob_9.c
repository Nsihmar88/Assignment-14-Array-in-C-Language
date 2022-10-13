/*  Write a program in C to read n number of values in an array and display it in reverse order. 
    Take array values from the user.
*/
#include<stdio.h>

int main ()
{
    int array[10],i;
    
    printf("\nEnter 10 Numbers: ");
    for (i = 0; i < 10; i++)
        scanf("%d",&array[i]);
    
    for (i = 9; i >= 0; i--)
        printf("%d ",array[i]);
    return 0;
}