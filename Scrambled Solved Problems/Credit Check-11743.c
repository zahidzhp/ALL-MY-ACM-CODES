#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,pri,no,l,cases,m;
    scanf("%d",&cases);

    char credit[20];

    for(l=0; l<cases; l++)
    {
        no=0;
        j=1;
        gets(credit);
       // for(m=0; m<19; m++)

        for(i=0; i<19; i++)
        {

            if((i+1)%5==0) i++;
            if(j%2==1)
            {
                pri=credit[i]-'0';
                pri=pri*2;
                if(pri>=10) no=no+pri%10+pri/10;
                else no=no+pri;
            }
            if(j%2==0)
            {
                pri=credit[i]-'0';
                no=no+pri;
            }
            j++;
        }
        if(no%10==0) printf("Valid\n");
        else printf("Invalid\n");
    }
    return 0;
}
