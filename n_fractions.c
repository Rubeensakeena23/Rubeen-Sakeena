//WAP to find the sum of n fractions.
#include<stdio.h>
struct fraction
{
  int n, d;
};

void addition(struct fraction a[], int n);
int gcd(int, int);
void output(struct fraction c);

void* input(struct fraction a[], int n)
{
  printf("Enter n ");
  scanf("%d", &n);
  for(int i=0; i<n ; i++)
  {
    printf("Enter fraction %d ", i);
    scanf("%d%d", &a[i].n, &a[i].d);
  }
  addition(a, n);
}

void addition(struct fraction a[], int n)
{
  struct fraction c;
  c.n = a[0].n;
  c.d = a[0].d;
  for(int i=0; i<n ; i++)
  {
     c.d = (((a[i].d * c.d)) / (gcd(a[i].d, c.d)));
  }
  for (int i = 0; i < n; i++) 
  {
    c.n = c.n + (a[i].n) * (c.d / a[i].d);
  }
  int hcf=gcd(c.n, c.d);
  c.n = c.n/ hcf;
  c.d = c.d/ hcf;
  output(c);
}

int gcd(int a, int b)
{
	int gcd;
	for(int i=1; i <= a && i <= b; ++i)
    {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    } 
    return gcd;
}

void output(struct fraction c)
{
  printf("The sum is %d/%d", c.n, c.d);
}
int main()
{
  struct fraction a[100];
  int n;
  input(a, n);
  return 0;
}
