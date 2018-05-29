#include <stdio.h>
int main()
{
    int h1,m1,h2,m2;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0&&m1==0&&h2==0&&m2==0) return 0;
        int t_t;
        if(h2>=h1)
        {
            if(h2==h1&&m1>m2) t_t=24*60+(m2-m1);
            else
            t_t=(h2-h1)*60+(m2-m1);
        }
        else
        {
            t_t=(24+(h2-h1))*60+(m2-m1);
        }
        printf("%d\n",t_t);
    }
    return 0;
}
