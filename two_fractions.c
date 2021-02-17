#include<stdio.h>
struct fractions{
int n,d;
};
typedef struct fractions frac;
struct fractions input1(frac a)
{
    printf("Enter the first fraction");
    scanf("%d %d", &a.n, &a.d);
    return a;
}
struct fractions input2(frac b)
{
    printf("Enter the second fraction");
    scanf("%d %d", &b.n, &b.d);
    return b;
}
int gcd(int a, int b)
{							
    if(a==0)						
    {							
        return b;
    }
    return gcd(b%a,a);
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
    a = input1(a);
    b = input2(b);
    addition(a,b);
    return 0;
}
