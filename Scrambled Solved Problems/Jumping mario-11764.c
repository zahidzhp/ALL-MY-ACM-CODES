#include <stdio.h>
int main()
{
    int a,b,k=1,j;
    scanf("%d",&a);
    while(k<=a)
    {
        scanf("%d",&b);
        short int l[b],high=0,low=0;
        for(j=0; j<b; j++)
        {
            scanf("%d",&l[j]);
            {
                if(j>0){
                    if(l[j]<l[j-1]) low++;
                    if(l[j]>l[j-1]) high++;
                }
            }
        }
        printf("Case %d: %d %d\n",k,high,low);
        k++;
    }
    return 0;
}
