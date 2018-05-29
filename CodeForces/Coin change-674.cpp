#include <iostream>
#include <stdio.h>
using namespace std;
int arr[5]={1,5,10,25,50};
int best[5][10000];
void reset(int n)
{
    for(register  int i=0;i<5;i++)
        for(register int j=0;j<10000;j++)
        best[i][j]=-1;
}
int way(int pos,int remain)
{
    if(pos>=5&&remain!=0) return 0;
    if(remain==0) return 1;
    if(best[pos][remain]!=-1) return best[pos][remain];
    int ways=0;
    for(register int i=0;i<=remain/arr[pos];i++)
        ways+=way(pos+1,remain-i*arr[pos]);
    return best[pos][remain]=ways;
}

 int main()
 {
     int cents;
     while(scanf("%d",&cents)==1)
     {
         reset(cents);
         printf("%d\n",way(0,cents));
     }
 }
