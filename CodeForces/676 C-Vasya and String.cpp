#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
string a;
int letter(int l1,int l2)
{
    int k=0
    for(register int i=l1;i<=l2;i++)
    {
        k=a[i]=='a'?k:k+1;
    }
    return k;
}

int main()
{
    int n,k;
    cin>>a;
    int low=0,high=n,mid=0;
    if((n-letter(0,high-1))<=k||n)
    while(low<=high)
    {
        mid=low+high;
        mid/=2;

    }

}
