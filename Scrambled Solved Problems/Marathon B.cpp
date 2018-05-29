#include <stdio.h>

int main()
{
    int a[5]={0,0,0,0,0};
    int nu,i,tem,ans=0;
    scanf("%d",&nu);
    for(i=1;i<=nu;i++)
    {
        scanf("%d",&tem);
        a[tem]++;
    }

    {
        if(a[4]>0)
            while(a[4]!=0)
        {
            a[4]--;
            ans++;
            nu--;
        }
        if(a[3]>0)
            while(a[3]!=0)
        {
            a[3]--;
            if(a[1]!=0){ a[1]--;nu--;}
            ans++;
            nu--;
        }
        if(a[2]>0)
            while(a[2]!=0)
        {
            a[2]--;
            if(a[2]>0) {a[2]--;nu--;}
            else if(a[1]>0)
            {
                a[1]--;
                if(a[1]>0){a[1]--;nu--;}
                nu--;
            }
            ans++;
        }
        if(a[1]>0)
            while(a[1]!=0)
        {
            ans+=a[1]/4;
            if(a[1]%4>0) ans++;
            a[1]=0;
        }
    }
    printf("%d\n",ans);
    return 0;
}
