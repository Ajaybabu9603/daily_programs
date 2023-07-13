#include<stdio.h>
int main()
{
	int arr[30],i,j,n;
	printf("enter number of elements in array:");
	scanf("%d",&n);
	printf("enter array elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("dup=%d",arr[i]);
			}
		}
	}
	return 0;
}

