#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n],x;
        cin>>x;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int i=0;
        ll cnt=0;
        while(i<n)
        {
            if(a[i]<x)
            {
                i++;
            }
            x=x*2;
            cnt++;
        }
        cout<<cnt<<endl;

    }
}
