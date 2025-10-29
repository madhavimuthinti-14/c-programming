#include<stdio.h>
int main()
{
	float p,t,r,SI;
	printf("enter p,r,t values");
	scanf("%f%f%f",&p,&r,&t);
	SI=(p*t*r)/100;
	printf("simple interest=%f",SI);
	return 0;
}
