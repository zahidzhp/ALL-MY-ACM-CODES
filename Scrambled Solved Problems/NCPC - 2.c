#include <stdio.h>

int main()
{
    int a,b,c,dat,cas=1,i;
    char day[10];
    char da[7][10];
    da[0]="FRIDAY";
    da[1]="SATURDAY";
    da[2]="SUNDAY";
    da[3]="MONDAY";
    da[4]="TUESDAY";
    da[5]="WEDNESDAY"
    da[6]="THURSDAY";

    while(scanf("%d %d",&a,&b)==2)
    {
        scanf("%s",day);
        c=b-a;
        dat=c%7;
        for(i=0;i<7;i++)
        {
            if(strcmp(day,da[i])==0)
            {
                printf("Case %d: %s\n",cas,da[(i+da)%7]);
            }
        }
    }
    return 0;
}
