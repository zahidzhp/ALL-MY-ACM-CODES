#include <iostream>
#include <stdio.h>
using namespace std;
int lcs(string a, string b)
{
    int len1=a.size();
    int len2=b.size();
    int matrix[len1+2][len2+2];
    register int i,j;
    for(i=0;i<=len1;i++)
        matrix[i][0]=0;
    for(i=0;i<=len2;i++)
        matrix[0][i]=0;
    for(i=1;i<=len1;i++)
        for(j=1;j<=len2;j++)
    {
        if(a[i-1]==b[j-1])
            matrix[i][j]=matrix[i-1][j-1]+1;
        else matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
    }
    return matrix[len1][len2];
}
int main()
{
    string a,b;
    int cas=1;
    while(1)
    {
        cin>>a;
        if(a[0]=='#') return 0;
        cin>>b;
        printf("Case #%d: you can visit at most %d cities\n",cas,lcs(a,b));
        cas++;
    }

}
