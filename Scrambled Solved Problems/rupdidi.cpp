#include <string>
#include <iostream>
#include <ostream>
#include<bits/stdc++.h>
using namespace std;

void increment(string &s)
{
    std::string:: reverse_iterator i = s.rbegin(), end = s.rend();
    int carry = 1,k;
    while (carry && i != end)
    {
        k = (*i - '0') + carry;
        carry = (k / 10);
        *i = '0' + (k % 10);
        ++i;
    }
    if (carry)
        s.insert(0, "1");
}

int main()
{
    string str,temp;
    int i,j,k,l,len,a,p=1;
    cin>>str;
    p=str.size();

    for(j=0; j<p/2; j++)
    {
        if(str[j]!=str[p-1-j])l=0;
    }

    if(l)cout<<str;

    else
    {
        for(i=1; ;)
        {
            increment(str);
            len=str.size();

            a=1;

            for(j=0; j<len/2; j++)
            {
                if(str[j]!=str[len-1-j])a=0;

            }

            if(a)
            {
                temp=str;
                break;
            }

            i++;
        }

        cout<<temp;
    }
    return 0;
}
