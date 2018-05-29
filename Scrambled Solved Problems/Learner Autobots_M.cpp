#include <stdio.h>
int main()
{
    int f0,f1,f2;
    while(scanf("%d %d %d",&f0,&f1,&f2)==3)
    {
        int A,B,C;
        C=f0;
        B=4*f1-3*f0-f2;
        B/=2;
        A=f1-C-B;
        printf("%d %d %d\n",9*A+3*B+C,16*A+4*B+C,25*A+5*B+C);

    }
    return 0;
}
