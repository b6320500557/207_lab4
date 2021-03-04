#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int coins[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&coins[i][j]);
        }
    }
     int total=0,max=0,min=0,maxx=0,minn=0;
    for(i=0; i<n-2 ;i++)
    {
        for(j=i; j<i+3; j++)
        {
            total += (coins[j][0]*4)+(coins[j][1]*2)+(coins[j][2]*1);
        }
    }
    return 0;
}
