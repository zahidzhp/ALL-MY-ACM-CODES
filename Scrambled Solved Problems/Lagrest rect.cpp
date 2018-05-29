#include <iostream>
#include <cstdio>
#include <stack>

int histogram[100001];
using namespace std;
int main()
{
    stack<int> pos;
    int cas,a,top,area=0,max_area=0;
    scanf("%d",&cas);
    register int i,j;
    for(j=0; j<cas; j++)
    {
        area=0;
        max_area=0;
        scanf("%d",&a);
        for(i=0; i<a; i++)
        {
            scanf("%d",&histogram[i]);
            while(1)
            {
                if(pos.empty()||histogram[pos.top()]<=histogram[i])
                {
                    pos.push(i);
                    break;

                }
                else
                {
                    top=pos.top();
                    pos.pop();
                    area=histogram[top]*(pos.empty()?i:i-pos.top()-1);
                    max_area=max(max_area,area);
                }
            }
        }
        while(!pos.empty())
        {
            top=pos.top();
            pos.pop();
            area=histogram[top]*(pos.empty()?i:i-pos.top()-1);
            max_area=max(max_area,area);
        }
        printf("%d\n",max_area);
    }
    return 0;
}
