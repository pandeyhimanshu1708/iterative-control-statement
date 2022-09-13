// Write a program to print the first 10 natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("\n %d",i);
    }
    return 0;
}