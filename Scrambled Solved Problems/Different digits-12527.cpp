#include <bits/stdc++.h>
using namespace std;
bool func(int i)
{
    int arr[10]={0};
    while(i!=0)
    {
        if((arr[i%10]++)==1) return false;
        i/=10;
    }
    return true;
}
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        register int i,j=0;
        for(i=a;i<=b;i++)
        {
            if(func(i))
                j++;
        }
        printf("%d\n",j);
    }
    return 0;
}
