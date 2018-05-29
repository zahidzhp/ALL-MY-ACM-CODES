#include <stdio.h>
int num;
int b[1000000];
void sorted_stack(int a)
{

    register int i,j;
    b[num]=a;
    num++;
    int swap;
    for(j=num-1; j>0; j--)
        {
            if(b[j]>b[j-1])
            {
                swap=b[j];
                b[j]=b[j-1];
                b[j-1]=swap;
            }
        }

}
int pop()
{
    num--;
    return b[num];
}
int main()
{
    int nu,k,cost,d;
    register int p;
        num=0;
    while(scanf("%d",&nu)==1)
    {
        if(nu==0) return 0;
        d=nu;
        for(p=0; p<nu; p++)
        {
            scanf("%d",&k);
            sorted_stack(k);
        }
        cost=0;
        k=0;
        while(num>1)
        {
            cost=pop()+pop();
            sorted_stack(cost);
            k+=cost;
        }
        pop();

        printf("%d\n",k);
    }
    return 0;
}
