//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int input()
{
  int a;
  scanf("%d", &a);
  return a;
}
int sum(int a, int b)
{
  int sum = a + b;
  return sum;
}
void output(int a, int b)
{
  printf("The sum is : %d \n", sum(a,b));
}
int main()
{
    int a,b;
  printf("Enter the value of a: ");
  a = input();
  printf("Enter the value of b: ");
  b = input();
  output(a,b);
  return 0;
}
