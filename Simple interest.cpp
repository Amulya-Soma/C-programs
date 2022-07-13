#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p, t;
	float  r;
	printf("Enter principal amount(p), time(t) and rate of interest(r)\n");
	scanf("%d %d %f",&p,&t,&r);
	printf("Simple interest = %f",(p*t*r)/100);
}
