#include <stdio.h>
int main()
{
    int a,j,i=0,b[13],t=0;
    scanf("%d",&a);
    if(a==0) return 0;
    else
    {
        for(j=0; j<a; j++)
        {
            t=0;
            for(i=0; i<13; i++)
            {
                scanf("%d",&b[i]);
                if(b[i]<=0) t=1;
            }
            if(t==0) printf("Set #%d: Yes\n",j+1);
            else printf("Set #%d: No\n",j+1);
        }
    }
    return 0;
}
