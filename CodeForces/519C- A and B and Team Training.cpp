
#include <stdio.h>

int main()
{
    int ex,nb,ans=0;
    scanf("%d %d",&ex,&nb);
    if(nb>=ex*2) printf("%d\n",ex);
    else if(ex>=nb*2) printf("%d\n",nb);
    else if(ex==0||nb==0) printf("0\n");
    else if(ex+nb<3) printf("0\n");
    else
    {
        while(ex > 0 && nb > 0)
        {
            if(ex > nb && ex >= 2)
            {
                nb--;
                ex -= 2;
                ans++;
            }
            else if(nb > ex && nb >= 2)
            {
                ex--;
                nb -= 2;
                ans++;
            }
            else if(ex == nb && nb >= 2)
            {
                ex--;
                nb -= 2;
                ans++;
            }
            else
                break;
        }
        printf("%d\n",ans);
    }
    return 0;
}
