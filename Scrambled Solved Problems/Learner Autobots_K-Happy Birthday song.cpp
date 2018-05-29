#include<cstdio>
#include<cstring>
#include <cmath>

using namespace std;
int main()
{
    int n,p;
    char s[100][100];
    char c[16][100]={"Happy","birthday","to","you","Happy","birthday",
    "to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    while(scanf("%d",&n)==1)
    {
        int k=0,p=1;
        for(int i=0;i<n;i++)
        scanf("%s",s[i]);
        if(n>16)
        p=ceil(n/16)+1;
        for(int j=0,i=0;j<16*p;j++,i++,k++)
        {
            if(i==n)
            i=0;
            if(j==16)
            k=0;
            printf("%s: %s\n",s[i],c[k]);
        }
    }
    return 0;
}
