#include<stdio.h>
void findpair(int num[],int n,int pair)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]+num[j]==10)
			{
				printf("pair found(%d,%d)\n",num[i],num[j]);
			}
		/*	else
			{
				printf("pair not found");
			}*/
		}
	}
}
int main()
{
	int num[30],n,pair,i;
	printf("enter number of elements in array:");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	findpair(num,n,pair);
	return 0;
}
