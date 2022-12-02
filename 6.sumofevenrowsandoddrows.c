#include <stdio.h>
int main()
{
   int r,c,i,j,sum=0,sum1=0;
   scanf("%d%d",&r,&c);
   int arr[r][c];
   for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   if(arr[r]%2==0)
		   {
		       sum += arr[i][j];
		   }
		   else
		   {
		       sum1 += arr[i][j];
		   }
		}
	}
	printf("%d %d",sum,sum1);
}
