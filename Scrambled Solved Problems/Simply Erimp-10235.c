#include <stdio.h>
#include <math.h>
int prime(int a);
int erimp(int b);
int main()
{
    int no;
    while(scanf("%d",&no)==1)
    {
        if(prime(no)==0) printf("%d is not prime.\n",no);
        if(prime(no)==1)
        {
            if(erimp(no)==1) printf("%d is emirp.\n",no);
            else printf("%d is prime.\n",no);
        }
    }
    return 0;
}
int prime(int a)
{
    int b,i,c;
    c=a;
    if(c==0) return 0;
    if(c==1) return 0;
    if(c%2==0||c%3==0||c%5==0||c%7==0) return 0;
    for(i=11; i<=sqrt(c); i=i+2)
    {
        if(c%i==0) return 0;
    }
    return 1;
}
int erimp(int b)
{
    int k=0,l=0;
    l=b;
    while(l!=0){
        k=k*10+l%10;
        l=l/10;
    }
    if(k==b) return 0;
    if(prime(k)==1) return 1;
    return 0;
}
