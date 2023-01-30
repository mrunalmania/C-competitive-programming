#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,q;
        cin>>n>>q;
        int lp=0,cnt=0;
        for(int i=0;i<q;i++){
            int a,b;
            cin>>a>>b;
            cnt+=abs(lp-a);
            cnt+=(abs(b-a));
            lp=b;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
