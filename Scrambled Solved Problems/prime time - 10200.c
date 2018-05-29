#include <stdio.h>
#include <time.h>
#include <math.h>
int prime[100010042];
int main()
{
    long long i,a;
    for(i=0; i<100010042; i++)
    {
        prime[i]=0;
    }
    printf("%ld\n",clock());
    prime[0]=0;
    prime[1]=0;
    prime[2]=1;
    prime[3]=1;
    register int x,y;
    for (x = 1; x <= 10001; x++)
    {
        for (y = 1; y <= 10001; y++)
        {
            register int n = 4 * x * x + y * y;

            if (n <= 100010041 && (n % 12 == 1 || n % 12 == 5))
            {
                if(prime[n]) prime[n]=0;
                else prime[n]=1;
            }

            n = 3 * x * x + y * y;

            if (n <= 100010041 && (n % 12 == 7))
            {
                if(prime[n]) prime[n]=0;
                else prime[n]=1;
            }

            if (x > y)
            {
                n = 3 * x * x - y * y;

                if (n <=100010041 && n % 12 == 11)
                {
                    if(prime[n]) prime[n]=0;
                    else prime[n]=1;
                }
            }
        }
    }

    register long long n,k,omit;
    for (n = 5; n <= 100010041; n++)
    {
        if (prime[n])
        {
            omit = n * n;

            for ( k = omit; k <=100010041; k +=omit)
            {
                prime[k] = 0;
            }
        }
    }


    return 0;
}
