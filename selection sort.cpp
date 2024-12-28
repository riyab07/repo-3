#include<stdio.h>

int main()
{
	int i,j,n,a[50],temp;
	printf("n = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			printf("a[%d] = ",i);
			scanf("%d",&a[i]);
		}
	printf("Before sorting : \n");
	for(i=0;i<n;i++)
		{
			printf("a[%d] = %d\n",i,a[i]);
		}
	for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
				{
					if(a[i]>a[j])
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
		}
	printf("After sorting : \n");
	for(i=0;i<n;i++)
		{
			printf("a[%d] = %d\n",i,a[i]);
		}
}
