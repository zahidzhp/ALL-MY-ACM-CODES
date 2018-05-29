#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,i,j,t,arr[100005],mid,low,high;
    arr[0]=0;
    scanf("%d",&n);;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&t);
        arr[i]=arr[i-1]+t;
    }
    scanf("%d",&j);
    for(i=0; i<j; i++)
    {
        scanf("%d",&t);
        low = 1;
        high = n;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (arr[mid] >= t)
                high = mid - 1;
            else
                low = mid + 1;
        }
        printf("%d\n",low);
    }
    return 0;
}
