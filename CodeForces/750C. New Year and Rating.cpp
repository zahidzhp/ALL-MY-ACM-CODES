#include <iostream>
#include <stdio.h>
using namespace std;

int arr[200005];
int divis[200005];
int n;
int check(int k)
{
    register int i,j;
    for(i=n-1; i>=0; i--)
    {
        k-=arr[i];
        if(divis[i]==1&&k<1900) return 1;
        else if(divis[i]==2&&k>=1900) return -1;
    }
    return 0;
}

int main()
{
    int flag1=0,flag2=1;
    cin>>n;
    register int i,j;
    for(i=0; i<n; i++)
    {
        cin>>arr[i]>>divis[i];
        if(i>0)
        {
            if((((arr[i-1]<0&&divis[i-1]==2)&&divis[i]==1)||(arr[i-1]>0&&divis[i-1]==1&&divis[i]==2))) flag1=1;
        }
        if(divis[i]==2) flag2=0;
    }
    if(flag1)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    if(flag2)
    {
        cout<<"Infinity"<<endl;
        return 0;
    }
    int h=22000000,l=-22000000,mid,c,ans=-22000000;
    while(h>=l)
    {
        mid=(l+h)/2;
        c=check(mid);
        if(c==1)
        {
            l=mid+1;
        }
        else if(c==-1)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
            ans=mid;
        }
    }
    if(ans<=-22000000||ans>=22000000) printf("Impossible\n");
    else
    printf("%d\n",ans);
    return 0;
}
