/*  Write a program to find the greatest number stored in an array of size 10. 
    Take array values from the user.
*/

#include<stdio.h>

int main ()
{
    int array[10],i,count=10,greatest=-9999;
    printf("\nEnter 10 Numbers: ");
    for (i = 0; i < count; i++)
        scanf("%d",&array[i]);
    for (i = 0; i < count; i++)
    {
        if(array[i]>greatest)
            greatest=array[i];        
    }
    printf("\nGreates number among all numbers is %d.",greatest);
    return 0;
}