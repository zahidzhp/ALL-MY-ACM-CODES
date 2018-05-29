#include <stdio.h>
int digi(int a)
{
    int a1,a2,a3,a4,a5,a6,a7,a8;
    a1=a%10;
    a=a/10;
    a2=a%10;
    a=a/10;
    a3=a%10;
    a=a/10;
    a4=a%10;
    a=a/10;
    a5=a%10;
    a=a/10;
    a6=a%10;
    a=a/10;
    a7=a%10;
    a=a/10;
    a8=a%10;
    a=a/10;
    if(a1+a2+a3+a4==a7+a5+a6+a8) return 1;
    else return 0;
}
int main()
{
    register int i;
    int sum=0;
    for(i=10000000; i<100000000; i++)
    {
        if(digi(i)) sum++;
    }
    printf("%d",sum);
    return 0;
}
