#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int qu[q];
        for(int i=0;i<q;i++){
            cin>>qu[i];
        }
        for(int i=0;i<q;i++){
            int max1=a[0];
            cout<<"refresh max1:"<<max1<<endl;
            for(int j=0;j<qu[i];j++){
                if(a[j]>max1){
                    max1 = a[j];
                }
            }
            cout<<max1<<endl;
        }
    }
    return 0;
}
