//WAP to find the distance between two point using 4 functions.
#include<math.h>
int input()
{
	int a;
	scanf("%d", &a);
	return a;
}
float distance(int x1, int y1, int x2, int y2)
{
	float dist = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
	return dist;
}
void output(int x1, int y1, int x2, int y2)
{
	printf("The distance between %d, %d and %d, %d is %f.\n", x1, y1, x2, y2, distance(x1,y1,x2,y2));
}
int main()
{
	printf("Enter point 1: ");
	int x1 = input();
	int y1 = input();
	printf("Enter point 2: ");
	int x2 = input();
	int y2 = input();
	output(x1, y1, x2, y2);
	return 0;
}

