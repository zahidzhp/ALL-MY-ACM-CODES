#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int main()
{
    int n,k;
    char t;
    cin>>n>>k;
        int arr[n+1];
    register int i=0,j=0;
    for(; i<n; i++)
    {
        cin>>t;
        if(t=='0')
        {
            arr[j]=i;
            j++;
        }
    }
    int m=100000000;
    int low,high,mid;
    for(i=0;i<j-k;i++)
    {
        low=i;
        high=i+k;
        while(low<high)
        {
            mid=high+low;
            mid/=2;
            if(abs(arr[mid]-arr[i])>abs(arr[mid]-arr[i+k])) high=mid;
            else if(abs(arr[mid]-arr[i])<abs(arr[mid]-arr[i+k])) low=mid+1;
            else {
                low=mid;
                break;
            }
        }
        m=min(m,max(abs(arr[mid]-arr[i]),abs(arr[mid]-arr[i+k])));
    }
    cout<<m<<endl;
    return 0;
}
