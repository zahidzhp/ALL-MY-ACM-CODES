#include<bits/stdc++.h>
using namespace std;
char ara[100];
int top=0;
char sk[100];
void push(char d)
{
    ara[top]=d;
    top++;
}

char pop()
{
    return ara[--top];
}

int main()
{
    char str[100],out[100],p;
    int len,i,q,r,j=0;
    scanf("%s",str);
    len=strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i]=='(')
        {
            push(str[i]);
        }

        else if(str[i]=='*'||str[i]=='+' || str[i]=='-' ||str[i]=='/')
        {
            push(str[i]);
        }

        else if(str[i]==')')
        {
            p=pop(); //p is int....
            while(p!='(')
            {
                out[j]=p;
                j++;
                p=pop();
            }
        }

        else if(str[i]>='0'&& str[i]<='9')
        {

            //push(str[i]);
            out[j++]=str[i];
        }
    }

    out[j]='\0';

    printf("%s",out);
    return 0;
}
