#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	int r, h;
	printf("Enter radius and height of the cylinder\n");
	scanf("%d %d",&r,&h);
	printf("%.2f", (pi*pow(r,2)*h));
}
