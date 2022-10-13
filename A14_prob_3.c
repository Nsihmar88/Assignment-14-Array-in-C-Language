/*  Write a program to calculate the sum of all even numbers and sum of all odd numbers, 
    which are stored in an array of size 10. Take array values from the user.
*/

#include<stdio.h>

int main ()
{
    int array[10],se=0,i,count=10,so=0;
    printf("\nEnter 10 Numbers: ");
    for (i = 0; i < count; i++)
    {
        scanf("%d",&array[i]);
        if(array[i]%2==0)
            se=se+array[i];
        else
        so=so+array[i];
    }
    printf("\nsum of even numbers is %d.",se);
    printf("\nsum of odd numbers is %d.",so);
    return 0;
}