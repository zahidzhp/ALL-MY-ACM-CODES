#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
int main()
{
    int cas;
    scanf("%d",&cas);
    while(cas--)
    {
        string a;
        cin>>a;
        int b;
        scanf("%d",&b);
        while(b--)
        {
            string c;
            cin>>c;
            if(a.find(c) != std::string::npos) printf("y\n");
            else printf("n\n");
        }
    }
    return 0;
}
