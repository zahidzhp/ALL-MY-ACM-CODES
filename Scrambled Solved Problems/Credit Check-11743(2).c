#include <stdio.h>
int sum(int a)
{
    int m=0,no1=0,no2=0,no3=0,no4=0,tem=0;
    m=a;
    tem=m%10;
    m=m/10;
    no1=tem;
    tem=m%10;
    tem=tem*2;
    {
        if(tem>=10) no2=tem/10+tem%10;
        else no2=tem;
    }
    m=m/10;
    tem=m%10;
    no3=tem;
    m=m/10;
    tem=m%10;
    tem=tem*2;
    {
        if(tem>=10) no4=tem%10+tem/10;
        else no4=tem;
    }
    return no1+no2+no3+no4;
}
int main()
{
    int total,j,i,cases,credit[4];
    scanf("%d",&cases);
    for(i=0; i<cases; i++)
    {
        total=0;
        for(j=0; j<4; j++)
        {
            if(scanf("%d",&credit[j])==1)
            {
                total=total+sum(credit[j]);
            }
        }
        if(total%10==0) printf("Valid\n");
        else printf("Invalid\n");
    }
    return 0;
}
