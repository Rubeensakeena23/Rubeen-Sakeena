//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int inputx(int x)
{
    scanf("%d", &x);
    return x;
}
int inputy(int y)
{
    scanf("%d", &y);
    return y;
}
float distance(int x1, int y1, int x2, int y2)
{
    float d;
    d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return d;
}
void output(int x1, int y1, int x2, int y2)
{
    printf("The distance is %f", distance(x1, y1, x2, y2));
}
int main()
{
    int x1, y1, x2, y2;
    printf("Enter the first coordinate");
    x1 = inputx(x1);
    y1 = inputy(y1);
    printf("Enter the second coordinate");
    x2 = inputx(x2);
    y2 = inputy(y2);
    output(x1, y1, x2, y2);
    return 0;
}



