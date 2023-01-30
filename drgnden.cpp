#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,q;
    cin>>n>>q;
    ll h[n+1],a[n+1];
    for(ll i=1;i<=n;i++)
    {
        cin>>h[i];
    }
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    while(q--)
    {
        ll f1,b,k,c,ans=0;
        cin>>f1;
        cin>>b;
        if(f1==1)
        {
            cin>>k;
            a[b]=k;
        }
        else
        {
            cin>>c;
            if(h[c]>h[b])
            {
                cout<<-1<<endl;
                continue;
            }
            if(c==b)
            {
                cout<<h[b]<<endl;
                continue;
            }
            std::vector<ll>path;
            path.push_back(c);
           // ll k=0;
            ans+=a[b];
            if(b>c)
            {
                for(ll i=c+1;i<=b-1;i++)
                {
                    if(h[i]>h[path.back()])
                    {
                        k++;
                        path.push_back(i);
                    }
                   /* else if(h[i]==h[path.back()])
                    {
                        if(a[i]>a[path.back()])
                        {
                            path.back()=i;
                        }
                    }*/
                }
                for(ll i=0;i<path.size();i++)
                {
                    cout<<"path:"<<path[i]<<endl;
                    if(h[path[i]]>=h[b])
                    {
                        ans=-1;
                        break;
                    }
                    ans+=a[path[i]];
                }
                cout<<ans<<endl;
                ans=0;
            }
            else if(b<c)
            {
                for(ll i=c-1;i>=b+1;i--)
                {
                    if(h[i]>h[path.back()])
                    {
                        path.push_back(i);
                    }
                    /*else if(h[i]==h[path.back()])
                    {
                        if(a[i]>a[path.back()])
                        {
                            path.back()=i;
                        }
                    }*/
                }
                for(ll i=0;i<path.size();i++)
                {
                    cout<<"path:"<<path[i]<<endl;
                    if(h[path[i]]>=h[b])
                    {
                        ans=-1;
                        break;
                    }
                    ans+=a[path[i]];
                }
                cout<<ans<<endl;
                ans=0;
            }
        }
    }
    return 0;
}
