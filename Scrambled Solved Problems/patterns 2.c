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
        for(k=l; k>0; k--)
        {
            printf("%d",k%10);
        }
        for(k=k+2; k<=l; k++)
        {
            printf("%d",k%10);
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
        for(k=l; k>0; k--)
        {
            printf("%d",k%10);
        }
        for(k=k+2; k<=l; k++)
        {
            printf("%d",k%10);
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
