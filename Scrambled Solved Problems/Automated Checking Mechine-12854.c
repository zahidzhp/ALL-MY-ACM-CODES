#include <stdio.h>
int main()
{
    int a[5],b[5],i,k;
    while(1)
    {
        for(i=0; i<5; i++)
        {
            if(scanf("%d",&a[i])!=1) return 0;
        }
        for(i=0; i<5; i++)
        {
            if(scanf("%d",&b[i])!=1) return 0;
        }
        k=0;
        for(i=0; i<5; i++)
        {
            if(a[i]==1&&b[i]==1)
            {
                printf("N\n");
                break;
            }
            if(a[i]==0&&b[i]==0)
            {
                printf("N\n");
                break;
            }
            else k++;
        }
        if(k==5) printf("Y\n");
    }
    return 0;
}
