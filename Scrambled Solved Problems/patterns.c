#include <stdio.h>
void patterns(int n)
{
    int i,j,k,l=1,m;
    for(i=n-1; i>=0; i--)
    {
        for(j=0; j<i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=l; k++)
        {
            m=k%10;
            printf("%d",m);
        }
        for(k=k-2; k>0; k--)
        {
            m=k%10;
            printf("%d",m);
        }
        printf("\n");
        l++;
    }
    l=l-2;
    for(i=i+2; i<=n-1; i++)
    {
        for(j=0; j<i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=l; k++)
        {
            m=k%10;
            printf("%d",m);
        }
        for(k=k-2; k>0; k--)
        {
            m=k%10;
            printf("%d",m);
        }
        printf("\n");
        l--;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    patterns(n);
}
