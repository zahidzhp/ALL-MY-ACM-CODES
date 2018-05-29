#include <iostream>

using namespace std;

string given;


void incre(int p)
{
    while (given[p]=='9')
    {
        given[p]='0';
        p--;
    }
    given[p]=(char)((int)(given[p])+1);
    return;
}

int main ()
{
    cin>>given;
    register long i;
    long j;
    for (i=0; i<((given.size())/2); i++)
    {
        j=given.size()-i-1;
        if (given[i]>=given[j])
        {
            given[j]=given[i];
        }
        else
        {
            incre (j-1);
            given[j]=given[i];
        }
    }
    cout<<given<<endl;
    return (0);
}
