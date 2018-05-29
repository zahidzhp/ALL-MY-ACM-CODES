#include <stdio.h>
int main()
{
	long long int x,y,m,n,z,j=0,k=0;
	scanf("%lld %lld",&x,&y);
	m=x;n=y;
	do
    {
        if(!(x%2))
        {
            x/=2;
        }
        else
            x=3*x+1;
        j++;
    }while(x!=1);
    do
    {
        if(!(y%2))
        {
            y/=2;
        }
        else
            y=3*y+1;
        k++;
    }while(y!=1);
	z=k>j?k+1:j+1;
	printf("%lld %lld %lld",m,n,z);
	return 0;
}
