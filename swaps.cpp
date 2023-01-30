#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        ll min1 = std::min(a[0],b[0]);
        map<ll,ll> a1;
        map<ll,ll>b1;
        for(ll i=0;i<n;i++)
        {
            map<ll,ll>::iterator i1=a1.find(a[i]);
            if(i1!=a1.end())
            {
                i1->second++;
            }
            else
            {
                a1.insert(i1,std::make_pair(a[i],1));


            }
        }

        for(ll i=0;i<n;i++)
        {
            map<ll,ll>::iterator i2=b1.find(b[i]);
            if(i2!=b1.end())
            {
                i2->second++;
            }
            else
                b1.insert(i2,std::make_pair(b[i],1));
        }
        map<ll,ll>c1;
        for(ll i=0;i<n;i++)
        {
            map<ll,ll>::iterator i3=c1.find(a[i]);
            if(i3!=c1.end())
            {
                i3->second++;
            }
            else
                c1.insert(i3,std::make_pair(a[i],1));
            map<ll,ll>::iterator i4=c1.find(b[i]);
            if(i4!=c1.end())
            {
                i4->second++;
            }
            else
                c1.insert(i4,std::make_pair(b[i],1));
        }
        map<ll,ll>::iterator i5;
        for(i5=c1.begin();i5!=c1.end();i5++)
        {
                if(i5->second%2!=0)
                {
                    //cout<<i5->first<<" "<<i5->second<<endl;
                    ans=-1;
                    break;
                }
                else
                {
                    if(i5->first==min1)
                    {
                        continue;
                    }
                    else
                    {
                        map<ll,ll>::iterator i6 = a1.find(i5->first);
                        map<ll,ll>::iterator i7 = b1.find(i5->first);
                        if(i6!=a1.end() && i7==b1.end())
                        {
                            ans+=(i5->second/2);
                        }
                        else if(i6==a1.end() && i7!=b1.end())
                        {
                            ans+=(i5->second/2);
                        }
                        else if(i6!=a1.end() && i7!=b1.end())
                        {
                            ll max1 = std::max(i6->second,i7->second);
                            ans+=(max1-(i5->second/2));
                        }
                    }
                }
        }
        if(ans==-1)
            cout<<ans<<endl;
        else
            cout<<ans*min1<<endl;
        /*for(i5=c1.begin();i5!=c1.end();i5++)
        {
            cout<<i5->first<<" "<<i5->second<<endl;
        }*/
    }
    return 0;
}
