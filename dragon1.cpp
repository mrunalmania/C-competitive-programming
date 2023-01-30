#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,q;
    cin>>n>>q;
    ll a[n],h[n];
    for(ll i=0;i<n;i++)
    {
        cin>>h[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(q--){
        ll f1,b,k,c,ans=0;
        cin>>f1;
        cin>>b;
        if(f1==1)
        {
            cin>>k;
            a[b-1]=k;
        }
        else if(f1==2)
        {
            cin>>c;
            ll l=h[c-1];
            ll r=h[b-1];
            if(l==r)
            {
                cout<<-1<<endl;
                ans=0;
                continue;
            }
            if(c<b)
            {

                for(ll i=c-1;i<=b-1;i++)
                {
                    if(h[i]>l)
                    {
                        l=h[i];
                        ans+=a[i];
                    }
                }
                if(l!=r)
                    ans=-1;
                else
                    ans+=a[c-1];

            }
            if(c>b)
            {

                for(ll i=c-1;i>=b-1;i--)
                {
                    if(h[i]>l)
                    {
                        l=h[i];
                        ans+=a[i];
                    }
                }
                if(l!=r)
                    ans=-1;
                else
                    ans+=a[c-1];
            }
            cout<<ans<<endl;
            ans=0;
        }
    }
    return 0;
}
