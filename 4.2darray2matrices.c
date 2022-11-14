#include <stdio.h>
int main()
{
	//int marks[3][5] = {{90,80,75,80,100},{60,72,84,94,99},{74,89,69,94,98}};
	//printf("%d",marks[0][1]);
	
	int n,i,j,sum=0;
	//printf("Enter rows and columns: ");
	scanf("%d",&n);
	int m1[n][n],m2[n][n], m3[n][n];
	//2d array reading
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	//printing 2d array
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	    	m3[i][j] = m1[i][j] + m2[i][j];
	        	printf("%d ",m3[i][j]);
	    }
	    printf("\n");
	}
}
