// Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>
#include<Windows.h>
int main ()
{
    int sum=0,i;
   
    int array[10];
    printf("\nEnter 10 Numbers: ");
    for (i = 0; i < ARRAYSIZE(array); i++)
    {
       scanf("%d",&array[i]);
       sum=sum+array[i];
    }
    printf("\nsum is %d.",sum);
    return 0;
}