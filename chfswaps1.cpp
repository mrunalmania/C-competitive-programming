#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll cnt=0;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int k=0;
        int p=n-1;

        while(k<n && p>0){
            int q=0,r=0;
            for(int i=k;i<n;i++){
                if(a[i]!=b[i])
                {
                    k=i;
                    q=1;
                    break;
                }
            }
          //  cout<<"k"<<k<<endl;
            for(int i=p;i>=0;i--){
                if(a[i]!=b[i]){
                    p=i;
                    r=1;
                    break;
                }
            }
            //cout<<"q:"<<q<<"r:"<<r<<endl;
            if(q==0 && r==0){
                break;
            }
            //cout<<"P"<<p<<endl;
            if(a[k]==a[k+1] && b[p]==b[p-1]){
                cnt+=std::min(a[k],b[p]);
                k=k+2;
                p=p-2;
            }
            else{
                cnt=-1;
                break;
            }
            //q=k;
            //r=p;
           // cout<<"cnt"<<cnt<<endl;
           // cout<<"k1"<<k<<endl;cout<<"P1"<<p<<endl;
        }
        cout<<cnt<<endl;


    }
}
