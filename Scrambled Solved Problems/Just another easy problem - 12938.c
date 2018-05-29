#include <stdio.h>
#include <string.h>


int main()
{
    char a[100][4],b[4];
    register int i,j,k;
    int n;
    for(i=31;i<100;i++)
    {
        j=i*i;
        a[i][3]=j%10+48;
        j/=10;
        a[i][2]=j%10+48;
        j/=10;
        a[i][1]=j%10+48;
        j/=10;
        a[i][0]=j%10+48;
    }

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=0;
        scanf("%s",b);
        for(j=31;j<100;j++)
        {
            printf("%s\n",a[j]);//if(strcmp(a[j],b)==1||strcmp(a[j],b)==-1) k++;
        }
        printf("Case %d: %d\n",i,k);
    }
    return 0;
}

