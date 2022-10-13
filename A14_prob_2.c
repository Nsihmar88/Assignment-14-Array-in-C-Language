// Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main ()
{
    float array[10],avg=0,sum=0;
    int i,count=10;
    printf("\nEnter 10 Numbers: ");
    for (i = 0; i < count; i++)
    {
       scanf("%f",&array[i]);
       sum=sum+array[i];
    }
    avg=sum/10.0;
    printf("\nAverage is %.2f.",avg);
    return 0;
}