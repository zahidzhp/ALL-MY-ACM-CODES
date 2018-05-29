#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int S[5]={1,5,10,25,50};
int count(int n )
{

    int table[n+1];
    memset(table, 0, sizeof(table));
    table[0] = 1;
    for(int i=0; i<5; i++)
        for(int j=S[i]; j<=n; j++)
            table[j] += table[j-S[i]];

    return table[n];
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",count(n));
    }
    return 0;
}
