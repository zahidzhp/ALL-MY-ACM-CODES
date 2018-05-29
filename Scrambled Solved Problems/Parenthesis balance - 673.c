#include <stdio.h>
#include <string.h>
int main()
{
    int cas,i,j,k,r=0,n=0;
    scanf("%d",&cas);
    for(i=0; i<cas; i++)
    {
        r=0;
        k=0;
        n=0;
        char line[128];
        scanf("%s",&line);
        int len,p1=0,p2=0;
        len=strlen(line);
        if(len==0)
        {
            printf("Yes\n");
            continue;
        }
        if(line[0]==')'||line[0]==']'||line[len-1]=='('||line[len-1]=='[')
        {
            printf("No\n");
            continue;
        }
        for(j=0; j<len; j++)
        {
            if(j>0)
            {
                if(line[j-1]=='('&&line[j]==']')
                {
                    n=1;
                    break;
                }
                if(line[j-1]=='['&&line[j]==')')
                {
                    n=1;
                    break;
                }
            }
            if(line[j]=='(')
            {
                r++;
                p1++;
            }
            else if(line[j]==')') r--;
            else if(line[j]==']')
            {
                k--;
                p2++;
            }
            else if(line[j]=='[') k++;
        }
        if(r!=0||k!=0)
        {
            printf("No\n");
            continue;
        }

        else
        {
            char li[128];
            strcpy(li,line);
            int l,m,dif1=0,dif2=0;
            for(l=0; l<len+1; l++)
            {
                for(m=l; m<len; m++)
                {
                    if(line[l]=='('&&line[m]==')')
                    {
                        dif1=dif1+(m-l+1);
                        line[m]=line[m]+10;
                    }
                    if(line[l]=='['&&line[m]==']')
                    {
                        dif2=dif2+(m-l+1);
                        line[m]=line[m]+10;
                    }
                }
            }
            if((p1%2==0&&dif1%2==0&&p2%2==0&&dif2%2==0)||(p1%2==0&&dif1%2==0&&p2%2==1&&dif2%2==1)||(p1%2==1&&dif1%2==1&&p2%2==0&&dif2%2==0)||(p1%2==1&&dif1%2==1&&p2%2==1&&dif2%2==1)) printf("Yes\n");
            else
            {
                printf("No\n");
                continue;
            }

        }
        if(n==1)
        {
            printf("No\n");
            continue;
        }
    }
    return 0;
}
