//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
int input()
{
  int a;
  scanf("%d", &a);
  return a;
}
void output()
{
  printf("The sum is : %d \n", Sum());
}
int Sum(int a, int b)
{
  int sum = a+ b;
  return sum;
}
void main()
{
  printf("Enter a: ");
  int a = input();
  printf("Enter b: ");
  int b = input();
  Sum(a,b);
  output();
}
