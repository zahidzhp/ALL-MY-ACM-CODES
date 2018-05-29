#include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i==0) return 0;
    long long a,b,c,d;
    while(scanf("%lld %lld %lld %lld",&a,&b,&c,&d)==4)
    {
        if(a+b+c<=d||a+b+d<=c||a+c+d<=b||b+c+d<=a)
            printf("banana\n");
        else if(a==b&&a==c&&c==d)
            printf("square\n");
        else if((a==b&&c==d&&a!=c)||(a==c&&b==d&&a!=b)||(a==d&&b==c&&a!=b))
            printf("rectangle\n");
        else printf("quadrangle\n");
        i--;
        if(i==0) return 0;
    }
    return 0;
}
