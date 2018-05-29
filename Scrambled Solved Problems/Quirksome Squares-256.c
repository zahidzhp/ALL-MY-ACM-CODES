#include <stdio.h>
#include <math.h>
int main()
{
    long long digi,i,j;
    while (scanf("%lld",&digi)==1)
    {
        if(digi==2)
        {
            for(i=0; i<10; i++)
            {
                for(j=0; j<10; j++)
                {
                    if((i+j)*(i+j)==i*10+j)
                    {
                        if(i*10+j<10) printf("0%lld\n",i*10+j);
                        else printf("%lld\n",i*10+j);
                    }
                    if((i+j)*(i+j)>i*10+j) continue;
                }
            }
        }
        else if(digi==4)
        {
            for(i=0; i<100; i++)
            {
                for(j=0; j<100; j++)
                {
                    if((i+j)*(i+j)==i*100+j)
                    {
                        if(i*100+j<10) printf("000%lld\n",i*100+j);
                        else if(i*100+j<100) printf("00%lld\n",i*100+j);
                        else if(i*100+j<1000) printf("0%lld\n",i*100+j);
                        else printf("%lld\n",i*100+j);
                    }
                    if((i+j)*(i+j)>i*100+j) continue;
                }
            }
        }
        else if(digi==6)
        {
            for(i=0; i<1000; i++)
            {
                for(j=0; j<1000; j++)
                {
                    if((i+j)*(i+j)==i*1000+j)
                    {
                        if(i*1000+j<10) printf("00000%lld\n",i*1000+j);
                        else if(i*1000+j<100) printf("0000%lld\n",i*1000+j);
                        else if(i*1000+j<1000) printf("000%lld\n",i*1000+j);
                        else if(i*1000+j<10000) printf("00%lld\n",i*1000+j);
                        else if(i*1000+j<100000) printf("0%lld\n",i*1000+j);
                        else printf("%lld\n",i*1000+j);
                    }
                    if((i+j)*(i+j)>i*1000+j) continue;
                }
            }

        }
        else if(digi==8)
        {
            for(i=0; i<10000; i++)
            {
                for(j=0; j<10000; j++)
                {
                    if((i+j)*(i+j)==(i*10000+j))
                    {
                        if(i*10000+j<10)      printf("0000000%lld\n",i*10000+j);
                        else if(i*10000+j<100) printf("000000%lld\n",i*10000+j);
                        else if(i*10000+j<1000) printf("00000%lld\n",i*10000+j);
                        else if(i*10000+j<10000) printf("0000%lld\n",i*10000+j);
                        else if(i*10000+j<100000) printf("000%lld\n",i*10000+j);
                        else if(i*10000+j<1000000) printf("00%lld\n",i*10000+j);
                        else if(i*10000+j<10000000) printf("0%lld\n",i*10000+j);
                        else printf("%lld\n",i*10000+j);
                    }
                    if((i+j)*(i+j)>i*10000+j) continue;
                }
            }
        }
    }
    return 0;
}
