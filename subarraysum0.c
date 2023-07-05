#include<stdio.h>
int main()
{
	/*int array[]={-3,1,2,4,5,3};
	int n=sizeof(array)/sizeof(array[0]);*/
	int array[30];
	int n,i;
	printf("enter number of elements in array:");
        scanf("%d",&n);
        printf("enter array elements");
        for(i=0;i<n;i++)
        {
                scanf("%d",&array[i]);
        }
	int flag=0,sum,j;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			sum+=array[j];
			if(sum==0)
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("subarray with 0 sum exists");
	}
	else
	{
		printf("subarray with 0 sum does not exists");
	}
	return 0;
}

