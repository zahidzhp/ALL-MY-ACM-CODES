#include <stdio.h>
#include <stdlib.h>

int prime[1010];
int res[1010];

int main()
{
    int a,num=0;
    long long i,k,j;
    for(i=0;i<=1010;i++) prime[i]=1;
    prime[0]=0;
    prime[1]=1;
    for(i=2;i<=32;i++)
    {
        if(prime[i]==1)
        {
            for(j=i*i;(j)<=1009;j+=i)
                prime[j]=0;
        }
    }
    for(i=0;i<=1000;i++){
        if(prime[i]==1)
            num++;
        res[i]=num;
    }

    int b,c,d,e=0,f;
    while(scanf("%d %d",&b,&c)==2)
        {
            e=0;
            f=res[b]-c*2;
            printf("%d %d:",b,c);
            if(f<=0)
            {
             for(i=1;i<=b;i++)
                if(prime[i]==1) printf(" %d",i);


                printf("\n\n");

                continue;
            }
            else if(f%2==0)
                {
                    for(i=1;i<=b;i++)
                    {
                        if(prime[i]==1)
                        {
                            e++;
                            if(e>(f/2)&&e<=(c*2+f/2))
                                printf(" %d",i);
                        }

                        if(e>(c*2+f/2)) break;
                    }

                }
            else if(f%2==1)
                {
                    f++;
                    for(i=1;i<=b;i++)
                    {
                        if(prime[i]==1)
                        {
                            e++;
                            if(e>(f/2)&&e<(c*2+f/2))
                                printf(" %d",i);
                        }

                        if(e>(c*2-1+f/2)) break;
                    }
                }
                printf("\n\n");
        }


    return 0;
}
