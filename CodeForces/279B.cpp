#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int arr[n+5];
    register int i,j;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    i=j=0;
    int k=0,sum=0,ans=0;
    while(i<n)
    {
        while(j<n)
        {
            if(sum+arr[j]<=t)
            {
                sum+=arr[j];
                //printf("%d %d %d\n",j,k,sum);
                j++;
                k++;
            }
            else
            {
                break;
            }
        }

        sum-=arr[i];
        ans=max(ans,k);
        k--;
        i++;
    }
    printf("%d\n",ans);
    return 0;
}
