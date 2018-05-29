#include <iostream>
#include <stdio.h>
using namespace std;
int a,b,k;
int prime[1000005];

bool check(int c)
{
    for(register int i=a;i<b-c+2;i++)
    {
        if(prime[i+c-1]-prime[i-1]<k){
            return false;
        }
    }
    return true;
}


int main()
{
    scanf("%d %d %d",&a,&b,&k);
    register int i,j;
    for(i=0;i<b+5;i++)
    {
        prime[i]=1;
    }
    prime[0]=prime[1]=0;
    for(i=2;i<b+5;i++)
    {
        if(prime[i])
        {
            for(j=i+i;j<b+5;j+=i)
            {
                prime[j]=0;
            }
        }
    }
    for(i=0;i<b;i++)
    {
        prime[i+1]+=prime[i];
        //cout<<i<<" "<<prime[i]<<endl;
    }
    if(prime[b]-prime[a-1]<k) {
        printf("-1\n");
        return 0;
    }
    int h=b-a+1,l=1,mid;
    while(h>l)
    {
        mid=(h+l)/2;
        if(check(mid))
            h=mid;
        else l=mid+1;
    }
    printf("%d\n",l);
    return 0;

}
