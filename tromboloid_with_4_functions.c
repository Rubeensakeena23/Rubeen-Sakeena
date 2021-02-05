//WAP to find the volume of a tromboloid using 4 functions.
float input()
{
	int a;
	scanf("%d",&a);
	return a;
}
float volume(int h, int d, int b)
{
	float vol = ((h*b*d) + (d/b))/3;
	return vol;
}
void output(int h, int b, int d)
{
	printf("The volume of tromboloid is %f\n",volume(h, b, d));
}
int main()
{
	float h, b, d;
	printf("Enter h: ");
	h = input();
	printf("Enter b: ");
	b = input();
	printf("Enter d: ");
	d = input();
	output(h, b, d);
	return 0;
}
