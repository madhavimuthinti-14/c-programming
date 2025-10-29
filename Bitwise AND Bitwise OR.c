#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("enter x,y values");
	scanf("%d%d",&x,&y);
	a=x&y;
	printf("bitwise AND=%d",a);
	b=x|y;
	printf("\n bitwise OR=%d",b);
	return 0;
	
}
