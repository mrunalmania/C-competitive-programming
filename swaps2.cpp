#include<bits/stdc++.h>
#define ll long long
using namespace std;
void swap1(ll *a,ll *b)
{
    ll temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
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
        }

        if(ans!=-1)
        {
            ll d;
            int flag=0;
            sort(a,a+n);
            sort(b,b+n);
            d=n-1;
            while(d>=0)
            {
                sort(a,a+n);
                sort(b,b+n);
                if(a[d]==b[d])
                  {
                     d--;
                     flag=0;
                  }
                else{
                    if(flag==0)
                    {
                        ll m1=*min_element(a,a+d+1);
                        ll m2 = *max_element(b,b+d+1);
                        swap1(min_element(a,a+d+1),max_element(b,b+d+1));
                        ans=ans+std::min(m1,m2);
                        flag=1;
                    }
                    else if(flag==1)
                    {
                        ll m3=*min_element(b,b+d+1);
                        ll m4=*max_element(a,a+d+1);
                        swap1(min_element(b,b+d+1),max_element(a,a+d+1));
                        ans=ans+std::min(m3,m4);
                        flag=0;
                    }
                }
            }

        }
        cout<<ans<<endl;
        ans=0;
    }
    return 0;
}
