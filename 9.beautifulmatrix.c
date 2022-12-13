#include <stdio.h>
int main()
{
	int n=5,m=5,i,j,sum=0,x,y,a,b;
	int arr[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i][j]==1)
			{
				x = i;
				y = j;
			}
			 a=abs(2-x);
			 b=abs(2-y);
		}
	}
	printf("%d",a+b);
}
