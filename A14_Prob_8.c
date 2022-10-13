/*  Write a program to find the second smallest number in an array.
    Take array values from the user.
*/
#include<stdio.h>

int main ()
{
    int array[10],i,count=10,first_s,second_s;
    
    printf("\nEnter 10 Numbers: ");
    for (i = 0; i < count; i++)
        scanf("%d",&array[i]);

    first_s=array[0];
    
    for (i = 0; i < count; i++)
    {
        if(array[i+1]<first_s)
        {
            second_s = first_s;
            first_s = array[i+1];            
        }
        else
        {
            if(array[i+1]<second_s)
                second_s=array[i+1];
        }  
    }
    printf("\nSecond Smallest number is: %d ",second_s);

    return 0;
}