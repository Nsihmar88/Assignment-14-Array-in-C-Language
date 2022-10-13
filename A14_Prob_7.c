/*  Write a program to find second largest in an array.
    Take array values from the user.
*/

#include<stdio.h>

int main ()
{
    int array[10],i,count=10,first_l,second_l;
    
    printf("\nEnter 10 Numbers: ");
    for (i = 0; i < count; i++)
        scanf("%d",&array[i]);
    first_l=array[0];
    
    for (i = 0; i < count; i++)
    {
        if(array[i+1]>first_l)
        {
            second_l = first_l;
            first_l = array[i+1];            
        }
        else
        {
            if(array[i+1]>second_l)
                second_l=array[i+1];
        }  
    }
    printf("\nSecond Largest number is: %d ",second_l);
    
    return 0;
}