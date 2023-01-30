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
        ll x,y;
        cin>>n;
        ll a[4*n-1][2];
        for(int i=0;i<4*n-1;i++){
            cin>>a[i][0];
            cin>>a[i][1];
        }
       // for(int i=0;i<4*n-1;i++){
         //   cout<<a[i][0]<<" "<<a[i][1]<<endl;
        //}


        map<ll,ll>x1;
       map<ll,ll>::iterator j;
      for(int i=0;i<4*n-1;i++){
        map<ll,ll>::iterator a1 =x1.find(a[i][0]);
        if(a1!=x1.end()){
            a1->second++;
           // cout<<a1->second;
        }
        else{
            x1.insert(a1,std::make_pair(a[i][0],1));
        }
      }
      for(j=x1.begin();j!=x1.end();++j){
        if(j->second%2!=0){
            x=j->first;
        }
      }
      map<ll,ll>y1;
      map<ll,ll>::iterator k;
      for(int i=0;i<4*n-1;i++){
        map<ll,ll>::iterator a2 = y1.find(a[i][1]);
        if(a2!=y1.end()){
            a2->second++;
        }
        else{
            y1.insert(a2,std::make_pair(a[i][1],1));
        }
      }
      for(k=y1.begin();k!=y1.end();++k){
        if(k->second%2!=0){
            y=k->first;
        }
      }
      cout<<x<<" "<<y<<endl;



    }
    return 0;
}
