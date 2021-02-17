//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter the two numbers");
    scanf("%d %d", &a, &b);
    sum=a+b;
    printf(" The sum is %d", sum);
    return 0;
}
