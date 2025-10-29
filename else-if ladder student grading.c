#include<stdio.h>
int main()
{
	int S1,S2,S3,tot,per;
	printf("enter subject marks");
	scanf("%d%d%d",&S1,&S2,&S3);
	tot=S1+S2+S3;
	per=tot/3;
	if(S1>=40&&S2>=40&&S3>=40)
	{
		if(per>=90)
		printf("A grade");
		else if(per>=70)
		printf("B grade");
		else if(per>=50)
		printf("C grade");
		else if(per>=40)
		printf("D grade");
	}
	else
	printf("failed");
	return 0;
}
