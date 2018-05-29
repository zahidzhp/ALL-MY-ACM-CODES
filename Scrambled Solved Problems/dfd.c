#include<stdio.h>
#include<math.h>

int main()
{
    int n,n1=0,i,j,k, flag=1;

    scanf("%d",&n);

    if(n<=1)printf("%d is not prime.\n",n);
    if(n==2||n==5||n==7||n==11||n==3)flag =1;
    else
    {

        for(i=2; i<=n/2; i++)
        {

            if(n%i==0)
            {
                printf("%d is not prime.\n",n);
                flag =0;
                break;

            }


        }


    }

    if(flag!=0)
    {

        flag == 1;
        k=n;
        while(n>0)
        {
            n1 = n1*10 + n%10;
            n = n/10;
        }
        for(i=2; i<=n1/2; i++)
        {
            if(n1%i==0)
            {
                printf("%d is  prime.\n",k);

                flag=0;
                break;
            }

        }



    }
    if(flag!=0)printf("%d is emirp.\n",k);


    return 0;
}
