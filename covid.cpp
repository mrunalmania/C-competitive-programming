#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k=0;
        int flag = 0;
        cin>>n;
        int line[n];
        int ptr[n];
        for(int i=0;i<n;i++){
            cin>>line[i];
            if(line[i]==1){
                ptr[k]=i;
                k++;
            }
        }
        int res[k-1];
        for(int i=0;i<k-1;i++){
            res[i] = ptr[i+1]-ptr[i];
        }
        for(int i=0;i<k-1;i++){
            if(res[i]<6){
                flag=1;
                break;
            }

        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
