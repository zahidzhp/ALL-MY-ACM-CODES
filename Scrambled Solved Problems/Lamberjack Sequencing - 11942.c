#include <stdio.h>
int main()
{
    int a[10];
    int p,b,j,c,k,ini1,ini2,ans=0;
    scanf("%d",&c);
    p=c;
    while(c!=0)
    {

        ans=0;
        for(b=0;b<10;b++)
        {
            scanf("%d",&k);
            if(b==0) ini1=k;
            else if(b==1) {ini2=k; j=k;}
            else
            {
                if(ini1>ini2)
                {
                   if(k<j)
                    j=k;

                    else ans++;
                }
                else if(ini1==ini2)
                {
                    ans++;
                }
                else {
                    if(k>j)
                    j=k;
                    else ans++;
                }
            }
        }
        if(p==c) printf("Lumberjacks:\n");
        if(ans!=0) printf("Unordered\n");
        else printf("Ordered\n");
        c--;
    }
    return 0;
}
