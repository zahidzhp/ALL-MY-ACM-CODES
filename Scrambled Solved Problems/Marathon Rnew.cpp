#include <iostream>
#include <string>



using namespace std;
int main()
{
    string m;
    cin>>m;
    int len=m.size();
    register int i,j,k,f2=0;
    if(m.size()==1)
    {
        if((m[0]-'0')%8==0) cout<<"YES\n"<<m<<endl;
        else cout<<"NO"<<endl;
        return 0;
    }
    if(m.size()==2)
    {
        if(((m[0]-'0')*10+m[1]-'0')%8==0){ cout<<"YES\n"<<m<<endl; return 0;}
        else
        {
            if((m[0]-'0')%8==0)
            {
                cout<<"YES\n"<<m[0]<<endl;
                return 0;
            }
            else if((m[1]-'0')%8==0)
            {
                cout<<"YES\n"<<m[1]<<endl;
                return 0;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
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
                    if(((m[i]-'0')*100+(m[j]-'0')*10+m[k]-'0')%8==0)
                {
                    if(m[i]=='0'&&m[j]=='0'&&m[k]=='0')
                        {
                            cout<<"YES\n"<<0<<endl;
                            return 0;
                        }
                        else
                        {
                            cout<<"YES\n"<<m[i]<<m[j]<<m[k]<<endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }


    for(i=0; i!=len; i++)
    {
        for(j=i+1; j!=len; j++)
        {
            if(((m[i]-'0')*10+m[j]-'0')%8==0)
            {
                if(m[i]=='0'&&m[j]=='0')
                {
                    cout<<"YES\n"<<0<<endl;
                    return 0;
                }
                else
                {
                    cout<<"YES\n"<<m[i]<<m[j]<<endl;
                    return 0;
                }
            }
        }
    }
    for(i=0; i!=len; i++)
    {
        if((m[i]-'0' )% 8 ==0)
        {
            cout<<"YES\n"<<m[i]<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
