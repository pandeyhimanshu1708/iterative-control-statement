// Write a program to print a table of 5.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
        printf("\n %d",n*i);
}