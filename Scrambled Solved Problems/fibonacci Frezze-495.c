#include <stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)==1){
        unsigned long long b=0,c,l=1,i;
        if(a==0){
            printf("The Fibonacci number for %d is %lld\n",a,b);
            continue;
        }
        if(a==1){
            printf("The Fibonacci number for %d is %lld\n",a,l);
            continue;
        }
        for(i=1;i<a;i++){
                c=l+b;
            if((int)i%2==0) l=c;
            else b=c;
        }
        printf("The Fibonacci number for %d is %lld\n",a,c);
    }
    return 0;
}
