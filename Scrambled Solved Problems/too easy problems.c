#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if(a==0) return 0;
    int i=1;
    while(scanf("%d",&b)==1){
        long long result;
        result=(((((((b*567)/9)+7492)*235)/47)-498)/10)%10;
        if(result<0) result=result*(-1);
        printf("%lld\n",result);
        if(i==a) return 0;
        i++;
    }
    return 0;
}
