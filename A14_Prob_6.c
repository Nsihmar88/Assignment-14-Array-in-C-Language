/*  Write a program to sort elements of an array of size 10. 
    Take array values from the user.
*/

#include<stdio.h>

int main ()
{
    int array[10],i,count=10,temp,j;
    printf("\nEnter 10 Numbers: ");
    for (i = 0; i < count; i++)
        scanf("%d",&array[i]);
    for (i = 0; i < count-1; i++)
    {
        for (j = i+1; j < count; j++)
        {
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }        
    }
    for (i = 0; i < count; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}