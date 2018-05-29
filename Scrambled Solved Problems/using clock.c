#include <stdio.h>
#include <time.h>
int main()
{
    int a=1,p=1;
    char b[]="HAPPY BIRTHDAY";
    char c[]="To YOu...Smile";

    while(1)
    {
        if(clock()>a*1000&&p==a)
        {printf(" %c\b",b[a-1]);
        a++ ;
        p++;
        }
        if(a>15) break;
    }
    return 0;
}
