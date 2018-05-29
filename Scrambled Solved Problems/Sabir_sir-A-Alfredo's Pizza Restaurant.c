#include <stdio.h>
int main()
{
    int r,w,l,n=1;
    while(scanf("%d",&r)==1)
    {
        if(r==0) return 0;
        scanf("%d %d",&w,&l);
        if(w*w+l*l<=4*r*r) printf("Pizza %d fits on the table.\n",n);
        else printf("Pizza %d does not fit on the table.\n",n);
        n++;
    }
    return 0;
}
