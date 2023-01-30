#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool csqrt(long double n){
    long double m = sqrt(n);
    bool flag = false;
    if((m-floor(m))==0){
        flag = true;
    }
    return flag;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,counter=0;
        cin>>n;
        int seq[n];
        for(int i=0;i<n;i++){
            cin>>seq[i];
        }
        unsigned int opsize = pow(2,n);
        unsigned int k,m,fact,prod=1;
        for(int cnt=1;cnt<opsize;cnt++){
            for(int j=0;j<n;j++){
                if(cnt & (1<<j)){
                    prod*=seq[j];
                    //cout<<seq[j]<<" ";

                }
            }
            //cout<<"prod:"<<prod<<endl;
            k=prod+1;
            while(k!=0){
                if(csqrt(k)){
                    break;
                }
                k++;
            }
            //cout<<"k:"<<k<<endl;
            fact = k - prod;
            if(csqrt(fact)){
                counter++;
            }
            prod=1;
        }
        cout<<counter<<endl;
    }
}
