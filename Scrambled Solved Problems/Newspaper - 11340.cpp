#include <iostream>
#include <string>
#include <cstdio>
#include <map>
using namespace std;
int main()
{
    map<char,double> ch;
    double cents,sum;
    int a[130];
    char k;
    int cas,cano,strno,b;
    scanf("%d",&cas);
    getchar();
    if(cas==0) return 0;
    register int i,j;
    for(i=0; i<cas; i++)
    {
        for(j=0; j<128; j++) a[j]=0;
        cin>>cano;
        for(j=0; j<cano; j++)
        {
            cin>>k>>cents;
            ch[k]=cents;
        }
        sum=0;
        string line;
        scanf("%d",&strno);
        getchar();
        for(int i = 0; i < strno; i++){
			line = "";
			getline(cin, line);
			int l = line.size();
			for(int j = 0; j < l; j++){
					sum += ch[line[j]];
			}
		}
        printf("%.2lf$\n",sum/100);
        ch.clear();
    }
    return 0;
}
