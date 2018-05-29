#include <stdio.h>
int main()
{
    int cases,std,i,k;
    scanf("%d",&cases);
    for(i=0;i<cases;i++){
        scanf("%d",&std);
        int j,swap=0;
        for(j=0;j<std;j++){
            scanf("%d",&k);
            if(k>swap) swap=k;
        }
        printf("Case %d: %d\n",i+1,swap);
    }
    return 0;
}
