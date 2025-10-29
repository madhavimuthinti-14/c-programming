#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter n value");
	scanf("%d",&n);
	do
	{
		printf("%d",i);
		i++;
	}while(i<=n);
	return 0;
}
