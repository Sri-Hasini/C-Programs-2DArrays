#include<stdio.h>

int main()
{
    int mat[15][15];
    int i,j,row,col,sum=0,sum1=0;
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }
    for(i=0;i<row;i++)
    {
   		sum1 = sum1 + mat[i][row-i-1];
    }
 	printf("%d", sum1+sum );
}
