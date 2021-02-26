#include<stdio.h>
struct fractions{
int n,d;
};
typedef struct fractions frac;
struct fractions input(frac a)
{
    scanf("%d %d", &a.n, &a.d);
    return a;
}

int gcd(int a, int b)
{ 
   int gcd;
   for(int i=1;i<=a && i<=b; ++i)
   { 
      if(a%i==0 && b%i==0)
        { 
 	        gcd=i;
        }
    }
    return gcd;
}
void addition(frac a, frac b)
{
    int n,d;
    n = (b.d*a.n)+(a.d*b.n);
    d = (a.d*b.d);
    int f = gcd(n,d);
    n = n/f;
    d = d/f;
    printf("The sum of %d/%d and %d/%d is %d/%d", a.n, a.d, b.n,b.d,n,d);
}
int main()  
{
    frac a, b;
    printf("Enter the first fraction");
    a = input(a);
    printf("Enter the second fraction");
    b = input(b);
    addition(a,b);
    return 0;
}
