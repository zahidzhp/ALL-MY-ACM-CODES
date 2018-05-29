#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    getc(stdin);

    while (n--)
    {
        stack<char> para;
        char p[140];
        gets(p);

        int len = strlen(p);
        register int i;
        for (i = 0; i < len; i++)
        {
            if (p[i] == '(' || p[i] == '[')
            {
                para.push(p[i]);
            }
            else if (p[i] == ')')
            {
                if (para.empty() || para.top() != '(')
                {
                    para.push('F');
                    break;
                }
                para.pop();
            }
            else if (p[i] == ']')
            {
                if (para.empty() || para.top() != '[')
                {
                    para.push('F');
                    break;
                }
                para.pop();
            }
        }

        if(para.empty()) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}

