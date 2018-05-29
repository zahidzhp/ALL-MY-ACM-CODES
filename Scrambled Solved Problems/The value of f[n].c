#include <stdio.h>

int f[100000001];

int main()
{

    int q,n,a;
    register int i,j;
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d %d %d %d",&f[0],&f[1],&f[2],&n);
        {
            for(j=3;j<=n;j++)
            {
                f[j]=(f[j-1]+2*f[j-2]+3*f[j-3])%9901;
                printf("%d\n",f[j]);
            }
        }
        printf("%d\n",f[j-1]);
    }
    return 0;
}
