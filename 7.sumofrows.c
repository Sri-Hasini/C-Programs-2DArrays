#include <stdio.h>

int main()
{
    int m,n,i,j;    
    scanf("%d%d",&n,&m);   
    int arr[n][m];  
    for(i=0;i<n;i++)     
    {
        for( j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)   
    {
        int rsum=0;
        for(j=0;j<m;j++)
        {
            rsum=rsum+arr[i][j];
        }
        printf("%d ",rsum);
    }
    /*for(int i=0;i<m;i++)
    {
        int csum=0;
        for(int j=0;j<n;j++)
        {
            csum=csum+arr[j][i];
        }
        printf("%d\n",i,csum);
    }
    */
    return 0;
}
