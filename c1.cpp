#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        int a,b,c,n;
        ll m;
        cin>>l>>r>>m;
        if(m<=l)
        {
            n=1;
            a=l;
            b=l;
            int diff = m-l;
            c=b+abs(diff);
        }
        else
        {
            n=(m/l);

        }
    }
}
