#include <iostream>
#include <stdio.h>
using namespace std;
int matrix[1001][1001];
int lcs(string a)
{
    int len=a.size();
    register int i,j;
    for(i=0;i<=len;i++)
        matrix[i][0]=matrix[0][i]=0;
    for(i=1;i<=len;i++)
        for(j=1;j<=len;j++)
    {
        if(a[i-1]==a[len-j])
        {
            matrix[i][j]=matrix[i-1][j-1]+1;
        }
        else matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
    }
    return matrix[len][len];
}


int main()
{
    int cas;
    scanf("%d",&cas);
    while(cas--)
    {
        string a;
        cin>>a;
        printf("%d\n",lcs(a));
    }
    return 0;
}
