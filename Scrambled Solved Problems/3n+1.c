#include <stdio.h>
int main()
{
	long long x,y,z,i,j,l,k=0;
	scanf("%lld %lld",&x,&y);
	if(x>y)
		{
			z=x+y;
			x=z-x;
			y=z-x;
		}
	for (i=x;i<=y;i++)
	{
	    l=i;
	    j=1;
		while(l!=1)
		{
			if(l%2==0)
            {
               l=l/2;
            }

			else {
                 l=3*l+1;
			}
			j++;
		}
		if(j>k) k=j;
	}
	printf("%lld",k);
	return 0;
}
