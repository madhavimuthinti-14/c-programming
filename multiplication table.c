#include<stdio.h>
int main()
{
	int tn,ts,i;
	printf("enter n value");
	scanf("%d",&tn);
	printf("enter table size");
	scanf("%d",&ts);
	for(i=1;i<=ts;i++)
	{
		printf("%d*%d=%d\n",i,tn,i*tn);
	}
	return 0;
}
