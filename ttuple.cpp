#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll p,q,r,a,b,c;
        ll ra,rb,rc,da,db,dc;
        cin>>p>>q>>r;
        cin>>a>>b>>c;
        ll dia = (p-a);
        ll dib = (q-b);
        ll dic = (r-c);
        if(abs(p)>abs(a)){
            ra = abs(p)%abs(a);
            da = abs(p)/abs(a);
        }
        else{
            ra = abs(a)%abs(p);
            da = abs(p)/abs(a);
        }
        if(abs(q)>abs(b)){
            rb = abs(q)%abs(b);
            db = abs(q)/abs(b);
        }
        else{
            rb = abs(b)%abs(q);
            db = abs(b)/abs(q);
        }
        if(abs(r)>abs(c)){
            rc = abs(r)%abs(c);
            dc = abs(r)/abs(c);
        }
        else{
            rc = abs(c)%abs(r);
            dc = abs(c)/abs(r);
        }


        if(dia == dib == dic == 0)
        {
            cnt=0;
        }
        else if((dia==dib==dic)!=0){
            cnt=1;
        }
        else if()



    }
}
