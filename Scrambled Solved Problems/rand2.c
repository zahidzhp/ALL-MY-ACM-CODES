#include <stdio.h>
#include <stdlib.h>
int rk();
int rf();
int main()
{

        double k;
        k=(double)rk()/(double)rf();
       printf("final %lf",k);
    return 0;
}
int rk(){
    int a;
       a=rand();
       return a;
}
int rf(){
    int b;
    b=rand();
    return b;
}
