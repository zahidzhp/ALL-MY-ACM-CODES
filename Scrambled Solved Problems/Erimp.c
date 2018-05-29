#include <stdio.h>
int prime_check(int a);
int emirp_check(int b);
int main()
{
     int x,j,k;
     while (scanf("%d",&x)==1){
        j=prime_check(x);
        if(j==1){
            k=emirp_check(x);
            if(k==1) printf("%d is emirp.\n",x);
            else printf("%d is prime\n",x);
        }
        else printf("%d is not prime.\n",x);
     }
     return 0;
}
int prime_check(int a)
{
    int b,c,d,e;
    b=a;
    for (c=2;c<b;c++){
        d=b%c;
        if(d==0) return 0;
    }
    return 1;
}
int emirp_check(int b)
{
    int i,j=0,k,l[10000],n,f,h;
    i=b;
    while(i!=0){
        l[j]=i%10;
        i=i/10;
        j++;
    }
    f=j;
    for(k=0;k<j;k++){
        n+=l[k]*pow(10,f);
        f--;
    }
    h= prime_check(n);
    return h;
}
