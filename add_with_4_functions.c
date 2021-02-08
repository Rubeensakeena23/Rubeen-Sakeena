//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int input()
{
  int a;
  scanf("%d", &a);
  return a;
}
void output(int a, int b)
{
  printf("The sum is : %d \n", Sum(a,b));
}
int Sum(int a, int b)
{
  int sum = a+ b;
  return sum;
}
int main()
{
  printf("Enter a: ");
  int a = input();
  printf("Enter b: ");
  int b = input();
  output(a,b);
  return 0;
}

