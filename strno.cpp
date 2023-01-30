#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int cnt=0;
        int x,k,n;
        cin>>x;
        cin>>k;
        n=x;
        while(n%2 == 0){
            cnt++;
            n=n/2;
        }
        for(int i=3;i<=sqrt(n);i=i+2){
            while(n%i==0){
                cnt++;
                n=n/i;
            }
        }
        if(n>2){
            cnt++;
        }

        if(cnt>=k){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }

    }
}
