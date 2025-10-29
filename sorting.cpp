#include<stdio.h>
void sortDescending(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
	int main()
	{
	    int n,i;
		printf("Enter the no.of elements:");
		scanf("%d",&n);
		int a[n];
		printf("Enter the elements:");
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}	
		sortDescending(a,n);
		printf("Array sorted in Descending order:");
		for(i=0;i<n;i++){
			printf("%d",a[i]);
		}
		printf("\n");
		return 0;
	}

