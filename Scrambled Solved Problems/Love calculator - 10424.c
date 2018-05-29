#include <stdio.h>
double digi(int a)
{
    int b;
    b=a;
    while(b/10!=0)
    {
        b=0;
        while(a!=0)
        {
            b+=a%10;
            a=a/10;
        }
        a=b;
    }
    return b;
}
int main()
{
    int sum1,sum2,i,j;
    double ans;
    char name1[25],name2[25];
    while(gets(name1)!=0){

        if(gets(name2)!=0)
        {
            sum1=0;
            sum2=0;
            for(i=0;name1[i]!='\0';i++)
            {
                if(name1[i]-'A'>=0&&name1[i]-'Z'<=0) sum1+=name1[i]-'A'+1;
                else if(name1[i]-'a'>=0&&name1[i]-'z'<=0) sum1+=name1[i]-'a'+1;
            }
            for(i=0;name2[i]!='\0';i++)
            {
                if(name2[i]-'A'>=0&&name2[i]-'Z'<=0) sum2+=name2[i]-'A'+1;
                else if(name2[i]-'a'>=0&&name2[i]-'z'<=0) sum2+=name2[i]-'a'+1;
            }
            ans=(digi(sum1)/digi(sum2));

            if(ans>1) ans=1/ans;

            printf("%.2lf %%\n",ans*100);

        }
        else return 0;
    }
}
