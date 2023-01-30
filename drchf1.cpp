#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;

        cin>>N;
        ll x,x1,a[N],a1;
        cin>>x;
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        a1=a[0];
        ll cnt=0, day=0;
        int n=0;
        int m;
        while(n<=N)
        {
            x1=x*pow(2,cnt);
            if(x1>a1)
            {
                m=(x1/a1);
                n=n+m;
            }
            cnt++;
            day++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
