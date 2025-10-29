#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,Ci;
	printf("enter p,t,r values");
	scanf("%f%f%f",&p,&t,&r);
	Ci=p*(pow(1+r/100,t)-1);
	printf("Ci=%f",Ci);
	return 0;
}
