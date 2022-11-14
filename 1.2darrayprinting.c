#include <stdio.h>
int main()
{
	//int marks[3][5] = {{90,80,75,80,100},{60,72,84,94,99},{74,89,69,94,98}};
	//printf("%d",marks[0][1]);
	
	int n,m,i,j;
	printf("Enter rows and columns: ");
	scanf("%d%d",&n,&m);
	int arr[n][m];
	//2d array reading
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	//printing 2d array
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
