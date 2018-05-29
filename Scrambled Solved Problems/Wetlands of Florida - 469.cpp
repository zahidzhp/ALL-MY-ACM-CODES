#include <iostream>
#include <string>
#include <vector>



using namespace std;

vector<string> b;


int main()
{
    int a,ans;
    string c;
    cin>>a;
    register int i,j;
    for(i=0;i<a;i++)
    {
        while(getline(cin,c))
        {
            ans=0;
            if(c[0]=='\0') break;
            else if(c[0]=='L'||c[0]=='W') b.push_back(c);
            else if(c[0]!='L'||c[0]!='W')
            {
                int k=0,l=0;
                j=0;
                while(c[j]!=' ')
                {
                    k=k*10+c[j]-'0';
                    j++;
                }

                while(c[j]!='\0')
                {
                    l=l*10+c[j]-'0';
                    j++;
                }
                ans=max(ans,DFS(k,l));
            }
        }
        printf("%d\n",ans);

    }
    return 0;

}
