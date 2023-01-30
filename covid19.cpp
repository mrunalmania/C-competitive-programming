#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k=0,cnt=1,min1=1,max1=1,a[n],j=0;
        while(k<n){
            int i=k;
            while(i<n){
                //cout<<"i"<<i<<endl;
                if(arr[i+1]-arr[i]<3){
                    cnt++;
                }
                else{
             //       cout<<"cnt"<<cnt<<endl;
               //     cout<<"j"<<j<<endl;
                    a[j]=cnt;
                    cnt=1;
                    k=i+1;
                    j++;
                    break;
                }
                i++;
            }
           // cout<<"k"<<k<<endl;
        }
       /* for(int i=0;i<j;i++){
            cout<<"a[i]"<<a[i]<<" ";
        }*/
        //cout<<endl;
        sort(a,a+j);
        cout<<a[0]<<" "<<a[j-1]<<endl;
    }
    return 0;
}
