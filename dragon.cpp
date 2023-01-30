#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,q;
    ll max1,in;
    cin>>n>>q;
    ll h[n],a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>h[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll fl,b,k,c;
    while(q--)
    {
        ll ans=0;
        cin>>fl;
        cin>>b;
        if(fl==1)
        {
            cin>>k;
            a[b-1]=k;
        }
        if(fl==2)
        {
            cin>>c;
            ans = 0;
            std::vector<ll>ar1;
            std::vector<ll> match;
            std::vector<ll>jump;
            ll e=b-1;
            while(e!=c-1)
            {
                ar1.push_back(h[e]);
                if(b>c)
                    e--;
                else if(b<c)
                    e++;
            }
            for(ll i=0;i<s;i++)
            {
                ar1[i]=h[e];
                jump.push_back(a[e]);
                if(i!=0)
                    match.push_back(h[e]);
                if(b>c)
                    e--;
                else if(b<c)
                    e++;
            }
           /* for(ll i=0;i<s;i++)
            {
                cout<<ar1[i]<<endl;
            }*/
            ll sr1=h[b-1];
            ll des1 = h[c-1];
            sort(match.begin(),match.end(),std::greater<ll>());
            ll qa=0;
            ll qa1=1;
            ans+=jump[0];
            while(qa1<s)
            {
                ll find_el = match[qa];
                if(find_el>=sr1)
                {
                    ans=-1;
                    break;
                }
                for(ll i=qa1;i<s;i++)
                    {
                        if(ar1[i]>find_el)
                        {
                            ans=-1;
                            break;
                        }
                        else if(ar1[i]==find_el)
                        {
                           // jump.push_back(ar1[i]);
                           // cout<<ar1[i]<<endl;
                            sr1 = ar1[i];
                            ans=ans+jump[i];
                            qa1=i+1;
                            break;
                        }
                    }
                    if(ans==-1)
                        break;
                qa++;
            }
            cout<<ans<<endl;

            }

        }

    }
    return 0;
}
