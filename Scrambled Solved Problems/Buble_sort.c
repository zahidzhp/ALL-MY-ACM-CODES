#include <stdio.h>
int main()
{
    int ara[100],k[100];
    int i,n,b,a;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for (i=0;i<n;i++)
    for (b=n;b>i;b--)
    {
        if(ara[i]<ara[b]){
            k[i]=ara[i];
        }
        if(a==0) break;
    }
    for (i=0;i<n;i++){
        printf("%d",k[i]);
    }
    if(a!=0) printf("Nothing matched -_-\n");
    return 0;
}
