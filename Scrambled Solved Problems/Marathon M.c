#include <stdio.h>
int digi(int a)
{
        int a1,a2,a3,a4;
        a1=a%10;
        a=a/10;
        a2=a%10;
        a=a/10;
        a3=a%10;
        a=a/10;
        a4=a%10;
        if(a1==a2||a1==a3||a4==a1||a2==a3||a2==a4||a3==a4) return 0;
        else return 1;
}
int main()
{
    int a;
    scanf("%d",&a);
    register int i;
    for(i=a+1;;i++)
    {
        if(digi(i)) { printf("%d\n",i); return 0;}
    }
}
