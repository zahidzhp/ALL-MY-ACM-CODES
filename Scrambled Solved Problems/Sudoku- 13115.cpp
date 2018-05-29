#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int cas;
    scanf("%d",&cas);
    while(cas--)
    {
        int n,flag=1;
        scanf("%d",&n);
        int grid[n+1][n+1];
        register int i,z,j,k,c;
        for(i=0; i<n; i++)
        {
            int arr[n+1];
            for(c=0;c<=n;c++)
                arr[c]=0;
            for(j=0; j<n; j++)
            {
                scanf("%d",&grid[i][j]);
                arr[grid[i][j]]++;
                if(arr[grid[i][j]]>1)
                    flag=0;
            }
        }
        for(i=0; i<n; i++)
        {
            int arr[n+1];
            for(c=0;c<=n;c++)
                arr[c]=0;
            for(j=0; j<n; j++)
            {
                arr[grid[j][i]]++;
                if(arr[grid[j][i]]>1)
                    flag=0;
            }
        }
        int p,l=sqrt(n);
        p=i=0;
        for(k=0; k<n; k+=l)
        {
            for(z=0; z<n; z+=l)
            {
                int arr[n+1];
                for(c=0;c<=n;c++)
                arr[c]=0;
                for(i=k; i<k+l; i++)
                {
                    for(j=z; j<z+l; j++)
                    {
                        arr[grid[i][j]]++;
                        if(arr[grid[i][j]]>1)
                            flag=0;
                    }
                }
            }
        }
        if(flag) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
