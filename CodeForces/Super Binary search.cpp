#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,l,h,m,a[n+5];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    l=0;
    h=n-1;
    while(l<h)
    {
        m=l+h+1;
        m=m/2;
        if(a[m]==0) l=m;
        else h=m-1;
    }
    if(a[l]==1&&l==0) printf("No 0\n");
    else if(a[l]==0&&l==n-1) printf("No 1\n");
    else
    printf("%d\n",l+1);
    return 0;
}
