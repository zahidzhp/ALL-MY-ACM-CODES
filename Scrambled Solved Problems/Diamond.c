#include <stdio.h>
int main()
{

    int x,y,n=1;
    for(x=1; x<=3; x++)
    {
        for (y=1; y<=5; y++)
        {
            if(y>3-n&&y<3+n) printf("*");
            else printf(" ");
        }
        n++;
        printf("\n");
    }
    n=2;
    for(x=4; x<=5; x++)
    {
        for (y=1; y<=5; y++)
        {
            if(y>3-n&&y<3+n) printf("*");
            else printf(" ");
        }
        n--;
        printf("\n");
    }
    return 0;
}
