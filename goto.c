#include<stdio.h>
#include<math.h>
int main()
{
	int n,s;
	Hi:
		printf("enter a number");
		scanf("%d",&n);
		if(n<0)
		goto Hi;
		s=sqrt(n);
		printf("square root is=%d",s);
		return 0;
}
