#include <stdio.h>
int  main ()
{
    int  N, K, i, J;
    while (~ scanf ( "%d %d" , & N, & K))
    {
        int  A = N / 2;
        if (A> K || (A == 0 && K!=0))
            printf ( "-1\n" );
        else  if (A == K)
        {
            for (i = 1; i <= N; i ++)
            {
                if (i> 1)  printf (" ");
                printf ( "%d" , i);
            }
            printf ("\n");
        }
        else
        {
            int  tmp = K - A + 1;
            printf ( "%d %d " , tmp, tmp * 2);
            for ( i = 1 + 2 * tmp, J = 1; J <A;i+= 2, J ++)
                printf ( "%d %d " , i, i + 1);
            if (N% 2 == 1)
                printf ( " %d" , i);
            printf ( "\n" );
        }
    }
    return  0;
}
