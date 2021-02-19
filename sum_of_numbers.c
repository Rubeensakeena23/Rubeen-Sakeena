//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int* input(int a[], int n)
{
  for(int i=0; i<n ; i++)
  {
    scanf("%d", &a[i]);
  }
  return a;
}
int addition(int a[], int n)
{
  int sum=0;
  for(int i=0; i<n ; i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void output(int a[], int n)
{
  printf("The sum is %d", addition(a, n));
}
int main()
{
  int a[100], n;
  printf("Enter number of integers ");
  scanf("%d", &n);
  printf("Enter the numbers ");
  input(a, n);
  output(a, n);
  return 0;
}
