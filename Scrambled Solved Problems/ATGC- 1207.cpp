#include <iostream>
#include <stdio.h>
using namespace std;
int matrix[2002][2002];

int editdis(string a, string b)
{
    int len1,len2;
    len1=a.size();
    len2=b.size();
    register int i,j;
    //int matrix[len1+1][len2+1];
    matrix[0][0]=0;
    for (i=1; i<=len1; i++)
        matrix[i][0]=matrix[i-1][0]+1;
    for (j=1; j<=len2; j++)
        matrix[0][j]=matrix[0][j-1]+1;
    for(i=1;i<=len1;i++)
        for(j=1;j<=len2;j++)
        {
            if(a[i-1]==b[j-1])
                matrix[i][j]=matrix[i-1][j-1];
            else matrix[i][j]=min(min(matrix[i-1][j]+1,matrix[i][j-1]+1),matrix[i-1][j-1]+1);
        }
    return matrix[len1][len2];
}
int main()
{

    while(1)
    {
        string a,b;
        int i,j;
        scanf("%d",&i);
        if(i!=0)
        cin>>a;
        scanf("%d",&j);
        if(j!=0)
        cin>>b;
        if(!i&&!j) return 0;
        printf("%d\n",editdis(b,a));
    }
    return 0;
}

