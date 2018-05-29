#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a==0&&b==0&&c==0) return 0;
        if(a>b&&a>c)
        {
            if(a*a==(b*b+c*c))
                printf("right\n");
            else printf("wrong\n");
        }
        else if(b>a&&b>c)
        {
            if(b*b==(c*c+a*a))
                printf("right\n");
            else printf("wrong\n");
        }
        else if(c>a&&c>b)
        {
            if(c*c==(a*a+b*b))
                printf("right\n");
            else printf("wrong\n");
        }
        else printf("wrong\n");
    }
    return 0;
}
