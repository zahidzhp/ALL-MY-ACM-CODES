#include <stdio.h>

int main()
{
    int n,age[101],p;
    register int i;
    while(scanf("%d",&n)==1)
    {
        if(n==0) return 0;

        for(i=0;i<101;i++) age[i]=0;


        for(i=0;i<n;i++)
        {
            scanf("%d",&p);
            age[p]++;
        }
        p=0;
        while(n!=0)
        {
            while(age[p]!=0)
            {
                printf("%d",p);
                age[p]--;
                n--;
                if(n!=0) printf(" ");
            }
            p++;
        }
        printf("\n");
    }
    return 0;

}
