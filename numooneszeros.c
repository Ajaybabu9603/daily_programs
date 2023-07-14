#include<stdio.h>
int main()
{
	int n,i,one=0,zero=0;
	printf("enter a number to print 1s and 0s in binary:");
	scanf("%d",&n);
	for(i=0;i<4;i++)
	{
		if(n&1)
		{
			one++;
		}
		else
		{
			zero++;
		}
		n=n>>1;
	}
	printf("number of 1s =%d and number of 0s =%d",one ,zero);
	return 0;
}

