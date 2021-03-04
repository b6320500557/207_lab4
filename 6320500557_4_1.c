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
    return 0;
}
