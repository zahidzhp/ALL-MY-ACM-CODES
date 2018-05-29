#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int cas;
    scanf("%d",&cas);
    while(cas--)
    {
        int n,tem;
        int arr[10]={0};
        scanf("%d",&n);
        for(register int i=1;i<=n;i++)
        {
            tem=i;
            while(tem!=0)
            {
                arr[tem%10]++;
                tem/=10;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
    }
    return 0;
}
