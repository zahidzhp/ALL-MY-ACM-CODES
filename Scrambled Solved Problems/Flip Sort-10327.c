#include <stdio.h>
int main()
{
    long long no;
    while(scanf("%lld",&no)==1)
    {
        long long a[no+10],count=0;
        register int i,j;
        for(i=0; i<no; i++)
        {
            if(scanf("%lld",&a[i])!=1) return 0;
        }
        for ( i = 0; i < no; i++ ) {
            for ( j = i + 1; j < no; j++ )
                if ( a [i] > a [j] ) count++;
        }
        printf("Minimum exchange operations : %lld\n",count);
    }
    return 0;
}
