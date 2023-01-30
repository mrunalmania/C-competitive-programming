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
        ll min1=min(a[0],b[0]);
        map<ll,ll,ll> a1;
        map<ll,ll,ll> b1;
        map<ll,ll,ll> c1;


        for(ll i=0;i<n;i++)
        {
            map<ll,ll>::iterator itr = a1.find(a[i]);
            map<ll,ll>::iterator itr1 = b1.find(b[i]);
            map<ll,ll>::iterator itr2 = c1.find(a[i]);

            if(itr!=a1.end())
            {
                itr->second++;
            }
            else
                a1.insert(itr,std::make_pair(a[i],1));
            if(itr1!=b1.end())
            {
                itr1->second++;
            }
            else
                b1.insert(itr1,std::make_pair(b[i],1));
            if(itr2!=c1.end())
            {
                itr2->second++;
            }
            else
                c1.insert(itr2,std::make_pair(a[i],1));
            map<ll,ll,ll>::iterator itr3 = c1.find(b[i]);
            if(itr3!=c1.end())
            {
                itr3->second++;
            }
            else
                c1.insert(itr3,std::make_pair(b[i],1));
        }
        map<ll,ll,ll>::iterator itr4;
        for(itr4=c1.begin();itr4!=c1.end();itr4++)
        {
            if(itr4->second%2!=0)
            {
                ans=-1;
                break;
            }
        }
        if(ans==-1)
        {
            cout<<ans<<endl;
            continue;
        }
        else
        {
            map<ll,ll,ll>::iterator itr5;
            itr5=c1.find(min1);
            itr5->second=-1;
            ll off;
            ll swaps=0;
            map<ll,ll,ll>::iterator itr6;
            for(itr6=c1.begin();itr6!=c1.end();itr6++)
            {
                cout<<itr6->first<<" "<<itr6->second<<endl;
            }
            /*for(itr4=c1.begin();itr4!=c1.end();itr4++)
            {

                if(itr4->second!=-1)
                {
                    off=itr4->second/2;
                    map<ll,ll,ll>::iterator itr5;
                    itr5=b1.find(itr4->first);
                    map<ll,ll,ll>::iterator itr6;
                    itr6=a1.find(itr4->first);
                    if(itr5->second>itr6->second)
                    {
                        swaps+=(off-itr5->second);
                    }
                    else if(itr6->second>itr5->second)
                    {
                        swaps+=(off-itr6->second);
                    }
                    else if(itr6->second==itr5->second)
                    {
                        swaps+=0;
                    }


                }
            }
            ans=swaps*min1;
            cout<<ans<<endl;
            ans=0;*/
        }

    }
    return 0;
}
