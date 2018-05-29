#include <stdio.h>

int main()
{
    long long h,s,c,i,k;
    int se,g;

    while(scanf("%lld %lld",&s,&h)==2)
    {
        if(s==0&&h==0) return 0;
        if(s>h)
        {
            k=h;
            h=s;
            s=k;
        }
        g=0;
        c=0;
        for(k=s;k<=h;k++)
        {
            se=0;
            i=k;
            do
            {
                if(i%2==0) i=i/2;
                else i=3*i+1;
                se++;
            }while(i!=1);
            if(se>g){
                g=se;
                c=k;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %d values.\n",s,h,c,g);
    }
    return 0;
}
