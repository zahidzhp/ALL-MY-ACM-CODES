#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int k[10001]={0};
    int i,a,b,c,q,j;

    for(i=1; i<=10000; i++)
        for(a=i; a<=10000; a+=i)
            k[a]+=1;
    scanf("%d",&b);
    for(i=0; i<b; i++)
    {
        j=0;
        scanf("%d %d",&c,&q);
        for(a=c; a<=q; a++)
        {
            if(k[k[a]]==2)
            {
                if(j==0)
                {
                    printf("%d",a);
                    j++;
                }
                else printf(" %d",a);
            }
        }
        if(j==0) printf("-1");
        printf("\n");
    }
    return 0;
}
