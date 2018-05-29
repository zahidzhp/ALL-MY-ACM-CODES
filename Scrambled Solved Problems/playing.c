#include <stdio.h>
int main()
{
    int space,star,i,j,k,row;
    printf("Please enter the no of Row: ");
    scanf("%d",&row);
    for(i=0;i<row;i++){
        for(j=row-i;j>1;j--) printf(" ");
        for(k=0;k<2*i+1;k++) printf("I love you   ");
        star=k;
        printf("\n");
    }
    row=row-1;
    for(i=row;i>0;i--){
        for(j=row+1;j>i;j--) printf(" ");
        for(k=0;k<2*(i)-1 ;k++) printf("I love you    ");
        printf("\n");
    }
    return 0;
}
