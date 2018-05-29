#include <iostream>
#include <stdio.h>
using namespace std;
string a,b;
int l[1005][1005];
void lcs()
{
    int len1=a.size(),len2=b.size();
    register int i,j;
    for(i=0;i<len1;i++)
        l[i][0]=0;
    for(i=0;i<len2;i++) l[0][i]=0;
    for(i=1;i<=len1;i++)
    {
        for(j=1;j<=len2;j++)
            if(a[i-1]==b[j-1])
        {
            l[i][j]=l[i-1][j-1]+1;
        }
        else l[i][j]=max(l[i-1][j],l[i][j-1]);
    }
}

int main()
{

    while(getline(cin,a))
    {
        getline(cin,b);
        lcs();
        cout<<l[a.size()][b.size()]<<endl;
    }
}
