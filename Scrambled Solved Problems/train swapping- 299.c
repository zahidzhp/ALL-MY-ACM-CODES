#include <stdio.h>
int main()
{
    int n,len,i,j,k=0,swap,l,p;
    scanf("%d",&n);
    while(k<n)
    {
        l=0;
        scanf("%d",&len);
        int no[len];
        for(i=0; i<len; i++)
        {
            scanf("%d",&no[i]);
        }
        for(j=0;; j++)
        {
            p=l;
            for(i=0; i<len-1; i++)
            {
                if(no[i]>no[i+1])
                {
                    swap=no[i];
                    no[i]=no[i+1];
                    no[i+1]=swap;
                    l++;
                }
            }
            if(l==p) break;
        }
        printf("Optimal train swapping takes %d swaps.\n",l);
        k++;
    }
    return 0;
}
