#include <stdio.h>
int main()
{
    long long i,set=1, test=0;
    while(scanf("%lld",&test)==1){
        if(test==0) return 0;
        long long total=0,ca[test];
        for(i=0;i<test;i++){
            if(scanf("%lld",&ca[i])!=1) return 0;
            total=total+ca[i];
        }
        long long av=0,result=0;
        av=total/test;
        for(i=0;i<test;i++)
        {
            if(ca[i]>av) result=result+(ca[i]-av);
        }
        printf("Set #%lld\nThe minimum number of moves is %lld.\n\n",set,result);
        set++;
    }
    return 0;
}
