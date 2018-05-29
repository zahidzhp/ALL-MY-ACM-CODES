#include <stdio.h>
int main()
{
    long int a,b;
    while(scanf("%ld %ld",&a,&b)==2)
    {
        long int c=0,d,e=0;
        d=a;
        while(d!=0)
        {
            c=c+d;
            e=e+d%b;
            if(e>=b)
            {
                c=c+e/b;
                e=e%b+e/b;
            }
            d=d/b;


        }
        printf("%ld\n",c);
    }
    return 0;
}
