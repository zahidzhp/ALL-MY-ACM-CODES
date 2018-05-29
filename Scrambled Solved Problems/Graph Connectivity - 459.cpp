#include <bits/stdc++.h>


using namespace std;
int main()
{

    string l;

    int cas,ans;
    scanf("%d",&cas);

    register int i,j,m;
    for(i=0; i<cas; i++)
    {
        ans=0;
        vector<int> a;
        int visit[100],d[100];
        memset(visit,0,100);
        l="";
        char big,one,two;
        scanf("%c",&big);
        while(scanf("%c %c",&one,&two)==2)
        {
            if(one=='\0')break;
            a[one-'A'].push_back(two-'A');
            a[two-'A'].push_back(one-'A');
            l+=one;
            l+=two;
        }
        for(j=0; j<l.size(); j++)
        {
            if(visit[l[j]-'A']==0)
            {

                queue<int> Q;
                Q.push(l[j]-'A');
                d[l[j]-'A'] = 0;
                visit[l[j]-'A']=1;
                while(!Q.empty())
                {
                    int u=Q.front();
                    Q.pop();
                    for(int m=0; m<a[u].size(); m++)
                    {
                        int v=a[u][m];
                        if(visit[v]==0)
                        {
                            visit[v]=1;
                            d[v]=1+d[u];
                            Q.push(v);
                        }
                    }
                }
            }
        }

    }


}
