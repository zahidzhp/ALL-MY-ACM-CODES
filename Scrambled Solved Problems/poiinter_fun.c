#include <stdio.h>
int main()
{
    int *a,*b,c,d;
    a=&c;
    b=&d;
    scanf("%d",a);
    printf("%d %d %p %p",c,*a,a,b);
    return 0;
}
