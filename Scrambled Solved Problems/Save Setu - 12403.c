#include <stdio.h>
int main()
{
    char a[7];
    int n,sum=0,k;
    register int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        if(a[0]=='d'){ scanf("%d",&k); sum+=k; }
        if(a[0]=='r') printf("%d\n",sum);
    }
    return 0;
}
