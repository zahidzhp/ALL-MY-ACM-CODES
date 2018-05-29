#include <stdio.h>

int main()
{
    int cases,a=0;
    scanf("%d",&cases);
    while(a<cases){
        double std,tot=0,no=0;
        scanf("%lf",&std);
        int ara[(int)std],i;
        for(i=0;i<std;i++){
            scanf("%d",&ara[i]);
            tot=tot+(double)ara[i];
        }
        for(i=0;i<std;i++){
            if(ara[i]>tot/std) no++;
        }
        printf("%.3lf%%\n",no*100/std);
        a++;
    }
}
