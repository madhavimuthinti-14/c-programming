#include<stdio.h>
int main()
{
	int i;
	printf("enter i value");
	scanf("%d",&i);
	for(i=1;i<=5;i++)
	{
		if(i==3)
		continue;
		printf("%d",i);
	}
	return 0;
}
