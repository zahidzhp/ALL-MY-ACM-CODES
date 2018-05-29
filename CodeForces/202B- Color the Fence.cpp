#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>
using namespace std;

struct color{
    int val,lit;
}col[10];

bool check(color a,color b){
    if(a.lit!=b.lit) return a.lit<b.lit;
    else return a.val>b.val;
}

int main()
{
    int l;
    scanf("%d",&l);
    register int i;
    for(i=0;i<9;i++)
    {
        scanf("%d",&col[i].lit);
        col[i].val=i+1;
    }
    sort(col,col+9,check);
    string k="";
    while(l-col[0].lit>=0)
    {
        k+=col[0].val+'0';
        l-=col[0].lit;
        //printf("%d\n",l);
    }
    if(k.length()==0)printf("-1\n");
    else cout<<k<<endl;
    return 0;
}
