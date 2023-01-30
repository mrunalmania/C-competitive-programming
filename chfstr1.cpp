#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0;
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1])
                sum=sum+(a[i]-a[i-1]-1);
            else
                sum=sum+(a[i-1]-a[i]-1);
           cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }

}
