#include <bits/stdc++.h>

using namespace std;
int main()
{
    stack<int> st;
    queue<int> qu;
    priority_queue<int> pqu;
    int cas;
    while(scanf("%d",&cas)==1)
    {
        register int i;
        int de,tem,fr,isque=1,istack=1,ispq=1;
        for(i=0; i<cas; i++)
        {

            scanf("%d",&de);
            {
                if(de==1)
                {
                    scanf("%d",&tem);
                    st.push(tem);
                    qu.push(tem);
                    pqu.push(tem);
                }
                if(de==2)
                {
                    scanf("%d",&tem);
                    if(st.empty())
                    {
                        isque=istack=ispq=0;
                        continue;
                    }
                    if(tem!=st.top())
                    {
                        istack=0;
                       // printf("inst->%d\n",tem);
                    }
                    st.pop();

                    if(tem!=qu.front())
                    {
                        isque=0;
                       // printf("inqu->%d\n",tem);
                    }
                    qu.pop();

                    if(tem!=pqu.top())
                    {
                        ispq=0;
                        //printf("inpqu->%d\n",tem);
                    }
                    pqu.pop();
                }
            }
        }
         if((istack&&isque&&ispq)||(istack&&isque)||(isque&&ispq)||(istack&&ispq))
            printf("not sure\n");
        else if(istack)
            printf("stack\n");
        else if(isque)
            printf("queue\n");
        else if(ispq)
            printf("priority queue\n");
        else if(!(istack&&isque&&ispq))
            printf("impossible\n");
        while(!st.empty()){
            st.pop();

            pqu.pop();

            qu.pop();
        }
    }
}
