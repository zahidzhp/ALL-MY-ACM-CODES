#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
int main()
{
    int cas,op=0;
    string a,proto="",host="",port="",path="";
    register int i,j;
    scanf("%d",&cas);
    for(i=0; i<cas; i++)
    {
        cin>> a;
        j=0;
        printf("URL #%d\n",i+1);
        while(j<a.size())
        {
            if(a[j]==':') break;
            proto+=a[j];
            j++;
        }
        if(proto!="") cout<<"Protocol = "<<proto<<endl;
        else printf("Protocol = <default>\n");
        j+=3;
        while(j<a.size())
        {
            if(a[j]==':'||a[j]=='/') break;
            host+=a[j];
            j++;
        }
        if(host!="") cout<<"Host     = "<<host<<endl;
        else printf("Host     = <default>\n");

        if(a[j]==':')
        {
            j++;
            while((a[j]-'0')<10&&((a[j]-'0')>=0)&&j<a.size())
            {
                port+=a[j];
                j++;
            }
        }
        if(port!="") cout<<"Port     = "<<port<<endl;
        else printf("Port     = <default>\n");


        j++;
        while(j<a.size())
            {
                path+=a[j];
                j++;
            }
        if(path!="") cout<<"Path     = "<<path<<endl;
        else printf("Path     = <default>\n");
        printf("\n");

        a.clear();
        port.clear();
        proto.clear();
        host.clear();
        path.clear();

    }
}
