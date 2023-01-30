#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long k;
        long long res;
        long long ans;
        int d0,d1;
        cin>>k>>d0>>d1;
        int a = d0;
        int b = d1;
        for(long long i=2;i<=k-1;i++)
        {
            res = (a+b);
            ans = res%10;


            a = res;
            b = ans;
        }
        res+=ans;

        if(res%3==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}
