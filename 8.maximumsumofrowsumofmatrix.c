#include <stdio.h>
int main()
{
    int m,n,i,j,lar=0;   
    int rsum=0;
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
        for(j=0;j<m;j++)
        {
            rsum=rsum+arr[i][j];
        }
        
    }
    while(n--)
    {
    while(m--)
    {
    if(rsum > lar)
        {
            rsum = lar;
        }
    }
    }
    printf("%d ",lar);
    return 0;
}
