#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
vector<string>v;
vector<string>fin;
vector<string>fin2;

int main()
{
    string str,temp,t,st,tt, tx, ty, ttt;
    int len,i,j,k,l,p,f=0,x,y,z, tag=0,pag=0,flag=0,xx;
    cin>>str;
    len=str.size();

    if(len==1)
    {
        if((str[0]-'0')%8==0) cout<<"YES"<<endl<<str;
        else cout<<"NO";
        return 0;
    }

    else if(len==2)
    {
        x=(str[0]-'0')*10 + (str[1]-'0');
        y=(str[1]-'0');
        z=(str[0]-'0');

        if(x%8==0 || y%8==0 || z%8==0)
        {
            f=1;

            if(x%8==0)
            {
                cout<<"YES"<<endl<<str;
                return 0;
            }
            else if(y%8==0)
            {
                cout<<"YES"<<endl<<str[1];
                return 0;
            }
            else
            {
                cout<<"YES"<<endl<<str[0];
                return 0;
            }
        }

        if(!f)
        {
            cout<<"NO";
            return 0;
        }
    }

    else
    {
        for(i=0; i!=len; i++)
        {
            for(j=i+1; j!=len; j++)
            {
                for(k=j+1; k!=len; k++)
                {
                    t+=str[i];
                    t+=str[j];
                    t+=str[k];

                    v.push_back(t);
                    t="";
                }
            }
        }

        for(i=0; i!=v.size(); i++)
        {
            cout<<v[i]<<endl;
            p=(v[i][0]-'0')*100 + (v[i][1]-'0')*10 + (v[i][2]-'0');

            if(p%8==0)
            {
                temp=v[i];
                flag=1;

            }
        }

        if(!flag)
        {
            for(i=0; i!=len; i++)
            {
                for(j=i+1; j!=len; j++)
                {
                    tt+=str[i];
                    tt+=str[j];
                    fin2.push_back(tt);
                    tt="";
                }
            }

            for(i=0; i!=fin2.size(); i++)
            {
                ttt=fin2[i];
                xx=(ttt[0]-'0')*10 + (ttt[1]-'0');

                if(xx % 8==0)
                {
                    tag=1;
                    tx=fin2[i];
                    break;
                }
            }

            if(!tag)
            {

                for(i=0; i!=len; i++)
                {
                    if((str[i]-'0' )% 8 ==0)
                    {
                        pag=1;
                        ty=str[i];
                        break;
                    }
                }
            }
        }

        if(flag)
        {
            int cnt=0;
            for(i=0; i!=temp.size(); i++)
            {
                if(temp[i]=='0')cnt++;
            }
                if(cnt==temp.size())cout<<"YES"<<endl<<0;
            else cout<<"YES"<<endl<<temp;
        }

        else if(tag)
        {
            if(tx[0]=='0' && tx[1]=='0')cout<<"YES"<<endl<<0;

           else cout<<"YES"<<endl<<tx;
        }

        else if( pag)cout<<"YES"<<endl<<ty;
        else cout<<"NO";
    }

    return 0;
}
