#include <stdio.h>
#include <math.h>
int main()
{
    long long a;
    while(scanf("%lld",&a)==1){
        long long ele,up,down;
        ele=(1+sqrt(8*a+1))/2;
        long long i,j,count=0;
        for(i=1;;i++)
        {
            if(i%2==1){
                up=i+1;
                down=0;
                for(j=1;j<=i;j++){
                    up--;
                    down++;
                    count++;
                    if(count==a) break;
                }
                if(count==a) break;
            }
            if(i%2==0)
            {
                down=i+1;
                up=0;
                for(j=1;j<=i;j++){
                    up++;
                    down--;
                    count++;
                    if(count==a) break;
                }
                if(count==a) break;
            }
        }
        printf("TERM %lld IS %lld/%lld\n",a,up,down);
    }
    return 0;
}
