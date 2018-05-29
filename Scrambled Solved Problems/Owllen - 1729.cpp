#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;
int main()
{
    string a;
    int letter[27];
    int n,mini;
    register int i,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
    for(i=0;i<26;i++)
    {
        letter[i]=0;
    }
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        letter[a[i]-'a']++;
    }
    mini=letter[25];
    for(i=0;i<26;i++)
    {
        mini=min(mini,letter[i]);
    }
    printf("Case %d: %d\n",j,mini);
    }

    return 0;
}

