#include <stdio.h>
#include <math.h>
int main()
{
    int a[3000];
    int i,k=1,j,n;
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    if (n==1&&a[0]==1)
    {
        j=1;
    }
    else if(n==1&&a[0]!=1){
        j=0;
    }
    else
    {
        for (i=0; i<n-1; i++)
        {
            if(abs(a[i]-a[i+1])==n-k)
            {
                j=1;
                k++;
            }
            else
            {
                j=0;
                break;
            }
        }
    }
    if(j==1) printf("Jolly\n");
    if(j==0) printf("Not jolly\n");
    return 0;
}
