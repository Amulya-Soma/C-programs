#include<stdio.h>
#include<math.h>
int main()
{
	int r;
	float pi=22.0/7.0;
	printf("Enter radius of the circle");
	scanf("%d",&r);
	printf("%.2f",(pi*pow(r,2)));
}
