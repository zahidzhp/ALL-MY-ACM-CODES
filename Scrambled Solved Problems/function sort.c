#include <stdio.h>
void sort(int n,int *x)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(*(x+i)>*(x+j))
            {
                *(x+i)=*(x+i)^*(x+j);
                *(x+j)=*(x+i)^*(x+j);
                *(x+i)=*(x+i)^*(x+j);
            }
        }
    }
}
int main()
{
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",a[i]);
    }
    sort(n,&a);
    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }


    return 0;
}
