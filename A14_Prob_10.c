/*  Write a program in C to copy the elements of one array into another array.
    Take array values from the user.
*/
#include<stdio.h>

int main ()
{
    int array[10],array2[10],i;
    
    printf("\nEnter 10 Numbers: ");
    for (i = 0; i < 10; i++)
        scanf("%d",&array[i]);
    
    for (i = 0; i < 10; i++)
    {
        array2[i]=array[i];
        printf("%d ",array2[i]);
    }
    return 0;
}