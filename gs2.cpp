#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#define  ll long long int
using namespace std;


int main() {
    ll n,q,a,b;
    cin>>n>>q;
    ll t[n],p[n];
    for(ll i=0;i<n;i++)
    {
        cin>>t[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>p[i];
    }
    map<ll,ll>q1;
    for(ll i=0;i<n;i++)
    {
        q1.insert({t[i],p[i]});
    }
    for(ll i=0;i<q;i++)
    {
        cin>>a;
        if(a==1)
        {
            int flag = 0;
            cin>>b;
            map<ll,ll>::iterator itr;
            for(itr=q1.begin();itr!=q1.end();itr++)
            {
                if(itr->second>=b)
                {
                    cout<<itr->first<<endl;
                    flag = 1;
                    break;
                }

            }
            if(flag==0)
                cout<<-1<<endl;
        }
        else if(a==2)
        {
            int flag1 = 0;
            ll max1;
            cin>>b;
            map<ll,ll>::iterator itr1;
            for(itr1=q1.begin();itr1!=q1.end();itr1++)
            {
                if(itr1->first>=b)
                {
                    flag1 = 1;
                    break;
                }
            }
            max1=itr1->second;
            for(;itr1!=q1.end();itr1++)
            {
                if(itr1->second>max1)
                {
                    max1=itr1->second;
                }
            }
            if(flag1 == 0)
                max1=-1;
            cout<<max1<<endl;
        }
    }
    return 0;
}
