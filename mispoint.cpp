#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll x1,y1;
        cin>>n;
        ll x[4*n-1];
        ll y[4*n-1];
        for(int i=0;i<(4*n-1);i++){
            cin>>x[i];
            cin>>y[i];
        }
        sort(x,x+(4*n-1));
        sort(y,y+(4*n-1));
        int i=0;
        while(i<(4*n-1)){
            if(x[i+1]!=x[i]){
                x1=x[i];
                break;
            }
            i=i+2;
        }
        int j=0;
        while(j<(4*n-1)){
            if(y[j+1]!=y[j]){
                y1=y[j];
                break;
            }
            j=j+2;
        }
        cout<<x1<<" "<<y1<<endl;
    }
    return 0;
}
