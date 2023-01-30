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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll a = a[0];
        ll sum = n*a;
        ll cnt=0;
       while(sum>0)
       {
           if(x>=a){
            cnt=cnt+n;
            break;
            }
           x=x*2;
           cnt++;

       }
        cout<<cnt<<endl;
    }
}
