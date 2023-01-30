#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,r,s;
    cin>>p>>q>>r>>s;
   // cout<<p<<q<<r<<s;
    int st=0;
    for(int i=p;i<=q;i++)
    {
        for(int j=r;j<=s;j++)
        {
            int l=i;
            int d=j;
            //cout<<l<<d<<endl;
            if(l==d)
            {
                st+=1;
                continue;
            }
            while(l!=d)
            {
                int mi = min(l,d);
                if(mi==l)
                    d=d-mi;
                else
                    l=l-mi;
                st+=1;
                if(l>d &&l%d==0)
                {
                    st+=(l/d);
                    break;
                }
                else if(l<=d && d%l==0)
                {
                    st+=(d/l);
                    break;
                }
            }
            //st+=1;
           // cout<<l<<d<<":"<<st<<endl;
        }
    }
    cout<<st<<endl;
    return 0;
}
