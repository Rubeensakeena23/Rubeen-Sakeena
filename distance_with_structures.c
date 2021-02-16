#include<stdio.h>
#include<math.h>
struct points{
int x,y;
};
struct points input1(struct points a)
{
printf("Enter the first coordinate");
scanf("%d %d", &a.x, &a.y);
return a;
}
struct points input2(struct points b)
{
printf("Enter the first coordinate");
scanf("%d %d", &b.x, &b.y);
return b;
}
float distance(struct points a, struct points b)
{
float d;
d = sqrt(((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y)));
return d;
} 
void output(struct points a, struct points b)
{
printf("The distance between (%d,%d) and (%d,%d) is : %f", a.x,a.y,b.x,b.y,distance(a,b));
} 
int main()
{
struct points a, b;
a = input1(a);
b = input2(b);
output(a,b);
return 0;
}
