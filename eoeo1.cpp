#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll ts;
        ll js;
        cin>>ts;
        if(ts%2 != 0)
        {
            cout<<ts/2<<endl;
            continue;
        }
        ll cnt=0;
        ll pts = ts;
        while(pts%2 == 0)
        {
            cnt++;
            pts=pts/2;
        }
        ll res=0;
        ll i = 1;
        ll cnt1=(ts/pow(2,(cnt+1)));
        /*while(res<ts)
        {
            res = (pow(2,cnt+1)*i);
            i++;
            cnt1++;
        }*/
        cout<<cnt1<<endl;

    }
    return 0;
}
