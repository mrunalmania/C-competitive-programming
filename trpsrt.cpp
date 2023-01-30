#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(i!=(a[i]-1)){
                cnt++;
            }
        }
        if(cnt<3){
            cout<<-1<<endl;
        }
        else{
            while(k>0){

            }
        }
    }
    return 0;
}
