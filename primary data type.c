#include<stdio.h>
int main()
{
	int x=10;
	char ch='A';
	float pi=3.14;
	double p=12345.0679;
	long int q=6553523;
	printf("x=%d",x);
	printf("\n ch=%c",ch);
	printf("\n pi=%f",pi);
	printf("\n p=%lf",p);
	printf("\n q=%ld",q);
	printf("\n address of x=%u",&x);
	return 0;
}
