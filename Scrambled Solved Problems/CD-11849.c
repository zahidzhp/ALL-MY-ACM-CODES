#include <stdio.h>
int ar[10000000];
int main()
{
    int a,b,cnt,temp;
    register int i,s;
    while (scanf("%d %d",&a,&b)==2)
    {
        if (!a && !b) return 0;
        cnt=0;
        for (i=0 ; i<a ; i++)
        {
            scanf("%d",&ar[i]);
        }
        for (i=0, s=0 ; i<b ; i++)
        {
            scanf("%d",&temp);
            for ( ; temp>=ar[s] && s<a ; s++)
            {
                if (ar[s] == temp)
                {
                    cnt++;
                    break;
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
