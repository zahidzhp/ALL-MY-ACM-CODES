#include <cstdio>
#include <iostream>
#include <stack>

using namespace std;
int main()
{
    printf("Enter the Infix string:\n");
    string a,b="";
    cin>>a;
    register int i,j;
    stack<char> st;
    st.push('(');
    for(i=0; i<a.size(); i++)
    {
        if(a[i]=='('||a[i]=='*'||a[i]=='^') st.push(a[i]);
        else if(a[i]=='/')
        {
            if(st.top()=='*')
                b+=st.top();
                st.pop();
                st.push(a[i]);
        }
        else if(a[i]=='+'||a[i]=='-')
        {
            if(st.top()=='*'||st.top()=='/'||st.top()=='^')
            {
                b+=st.top();
                st.pop();
                st.push(a[i]);
            }
            else st.push(a[i]);
        }
        else if(a[i]-'0'>=0&&a[i]-'0'<10) b+=a[i];
        else if(a[i]==')')
        {
            while(st.top()!='(')
            {
                b+=st.top();
                st.pop();
            }
            st.pop();
        }
    }
    cout<<b<<endl;
    return 0;
}
