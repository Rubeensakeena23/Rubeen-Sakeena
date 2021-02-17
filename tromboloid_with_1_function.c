//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
  int a,b,c;
  float vol;
  printf("Enter a:");
  scanf("%d", &a);
  printf("Enter b:");
  scanf("%d", &b);
  printf("Enter c:");
  scanf("%d", &c);
  vol= ((a*c*b) + (c/b))/3;
  printf(" The volume of the Tromboloid is %f",vol);
  return 0;
}
