#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int matrix[1002][1002];
int edit(string a)
{
    int len=a.size();
    register int i,j;
    for(i=0;i<=len;i++)
        matrix[0][i]=matrix[i][0]=0;
    for(i=1;i<=len;i++)
        for(j=1;j<=len;j++)
    {
        if(a[i-1]==a[len-j])
            matrix[i][j]=matrix[i-1][j-1];
        else matrix[i][j]=min(min(matrix[i-1][j]+1,matrix[i][j-1]+1),matrix[i-1][j-1]+1);
    }
    return matrix[len][len];
}


int main()
{
    int cas;
    scanf("%d",&cas);
    register int i;
    for(i=1;i<=cas;i++)
    {
        string a,b="";
        cin>>a;
        register int j;
        for(j=a.size()-1;j>=0;j--)
            b+=a[j];
        printf("Case %d: %d\n",i,min(edit(a),edit(b)));
    }
    return 0;
}
