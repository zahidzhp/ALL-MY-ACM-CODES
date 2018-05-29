#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+2];
    char a[n+2][n+2],t;
    for(register int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    register int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%c",&a[i][j]);
            scanf("%c",&t);
    }
    for(i=0;i<n-1;i++)
        for(j=0;j<n;j++)
        {
            if(arr[i]>arr[j]&&a[i][j]-'0') swap(arr[i],arr[j]);
        }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");

}
