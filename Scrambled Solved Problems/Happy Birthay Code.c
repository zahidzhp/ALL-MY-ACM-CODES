#include <stdio.h>
#include <time.h>
int main()
{
    int a=0;
    clock_t a1,b1,a2,b2,a3,b3;
    printf("Happy");
    while(1)
    {
        if(clock()>5000) break;
    }
    printf("\tBirth");
    while(1)
    {
        if(clock()>10000) break;
    }
    printf("\tDay\n");
    return 0;
}
