#include <stdio.h>
int main ()
{
    int test,x,y,flag,diff,count,start;
    scanf ("%d", &test);

    while ( test--)
    {
        scanf ("%d %d", &x, &y);

        diff = y - x;
        count = 0;
        start = 1;
        flag = 0;

        while ( diff > 0 ) {
            diff -= start;
            count++;
            if ( flag )
                start++;
            flag = !flag;
        }

        printf ("%d\n", count);
    }

    return 0;
}

