#include <iostream>
#include <stdio.h>
int matrix[1001][1001];
using namespace std;
int lcs(string a,string b)
{
    int len1=a.size();
    int len2=b.size();
    register int i,j;
    for(i=0; i<=len1; i++)
        matrix[i][0]=0;
    for(i=0; i<=len2; i++)
        matrix[0][i]=0;
    for(i=1; i<=len1; i++)
        for(j=1; j<=len2; j++)
        {
            if(a[i]==b[j])
                matrix[i][j]=matrix[i-1][j-1]+1;
            else matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
        }
    return matrix[len1][len2];
}
int main()
{
    int k;
    while(scanf("%d",&k)&&k)
    {
        int ans;
        string a,b;
        cin>>a>>b;
        ans=lcs(a,b);
        if(ans<k) printf("0\n");
        else printf("%d\n",ans);
    }
    return 0;
}
