#include<stdio.h>
float input(float h)
{
    scanf("%f", &h);
    return h;
}
float tromboloid(float h, float b, float d)
{
    float volume;
    volume = ((h*b*d)+(d/b))/3;
    return volume;
}
void output(float h, float b, float d)
{
    printf("The volume is: %f", tromboloid(h,b,d));
}
int main()
{
    float h, b, d;
    printf("Enter h, b and d:");
    h=input(h);
    b=input(b);
    d=input(d);
    output(h,b,d);
    return 0;
}
