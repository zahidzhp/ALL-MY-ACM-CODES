#include <iostream>
#include <stdio.h>

int len1,len2;
int a[105],b[105],matrix[101][101];
using namespace std;
void LCSberkori()
{
    register int i,j;
    for(i=0; i<=len1; i++)
        matrix[i][0]=0;
    for(i=0; i<=len2; i++)
        matrix[0][i]=0;
    for(i=1; i<=len1; i++)
        for(j=1; j<=len2; j++)
        {
            if(a[i-1]==b[j-1])
            {
                matrix[i][j]=matrix[i-1][j-1]+1;
            }
            else matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
        }

    //return matrix[len1][len2];
}

int main()
{
    int cas=1;
    while(scanf("%d %d",&len1,&len2)&&len1&&len2)
    {
        register int i;
        for(i=0; i<len1; i++)
            scanf("%d",&a[i]);
        for(i=0; i<len2; i++)
            scanf("%d",&b[i]);
        LCSberkori();
        printf("Twin Towers #%d\nNumber of Tiles : %d\n",cas,matrix[len1][len2]);
        cas++;
    }
    return 0;
}
