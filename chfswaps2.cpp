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
        int fl=0,fl2=0;
        ll a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int a1[1000000001],b1[1000000001],c[1000000001];
        for(ll i=0;i<1000000001;i++)
        {
            a1[i]=0;b1[i]=0;c[i]=0;
        }
        for(int i=0;i<n;i++){
            a1[a[i]]++;
            b1[b[i]]++;
            c[a[i]]++;
            c[b[i]]++;
        }
        sort(a,a+n);
        sort(b,b+n);
        ll min1 = min(a[0],b[0]);
        if(a[0]!=b[0]){
            if((a1[a[0]]%2)!=0 && (b1[b[0]]%2)!=0)
                fl=1;

        }
        if(fl!=1){
            fl2=1;
            for(ll i=0;i<1000000001;i++)
            {
                if((c[i]%2)!=0)
                {
                    fl=1;
                    break;
                }
            }
        }

        if(fl==1)
        {
            cout<<-1<<endl;
            continue;
        }



    }
}
