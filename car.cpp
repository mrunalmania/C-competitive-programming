#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int p=0;
        int fact;
        cin>>n;
        int car[n];
        for(int i=0;i<n;i++){
            cin>>car[i];
        }
        sort(car,car+n);
       /* for(int i=0;i<n;i++){
            cout<<car[i]<<endl;
        }*/
        for(int i=0;i<n;i++){
            fact = car[i]-(n-1-i);
          //  cout<<"fact:"<<fact<<endl;
            if(fact<0){
                fact = 0;
            }
            p+=fact;
           // fact=0;
        }
        cout<<p;

    }
    return 0;
}
