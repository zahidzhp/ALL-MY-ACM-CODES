#include <stdio.h>
void func(int j,int *n);
void swap(int *a);
int main()
{
    int a,*n,j=0;
    n=&a;
    do {
        scanf("%d",n);
        n++;
        j++;
    }while(*n!=NULL);
        n=&a;
    func(j,n);

    for(;*n!=NULL;){
        printf("%d",*n);
        n++;
    }
    return 0;
}
void func(int j,int *n)
{
    int i;
    for (i=0;i<j;i++){
        for (i=0;i<j;i++){
            if(*n>*(n+1)) swap(n);
        }
    }
}
void swap(int *a)
{
    int b;
    b=*a;
    *a=*(a+1);
    *(a+1)=b;

}
