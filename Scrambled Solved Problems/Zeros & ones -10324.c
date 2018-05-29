#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,j,p;
    int a,b;
    char line[1000015],cas=1;

    while(gets(line)!=0)
    {
        if(strlen(line)==0) return 0;



        scanf("%d",&t);

        printf("Case %d:\n",cas);
        cas++;

        for(i=0; i<t; i++)
        {

            p=0;
            scanf("%d %d",&a,&b);

            if(a>b)
            {
                a=a^b;
                b=b^a;
                a=a^b;
            }

            for(j=a; j<=b; j++)
            {
                if(line[a]!=line[j])
                {
                    p=1;
                    break;
                }
            }
            if(p==0) printf("Yes\n");
            else  printf("No\n");
        }

        getchar();

    }
    return 0;
}
