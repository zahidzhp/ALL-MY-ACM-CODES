#include <stdio.h>
#include <math.h>

int main()
{
    int x,y,z=0,found,a;
    scanf("%d",&a);
    for (x=2;x;x++)
    {
        found=0;
        for (y=2;y<x;y++)
        {
            if (x%y==0)
              {

               found++;
                break;}
        }
        if(found==0)
          z++;
        if(z==a) break;

    }
    printf("%d",x);
    return 0;
}
