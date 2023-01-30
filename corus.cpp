#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        char str[n];
        int c[q],f[26],f1;
        for(int i=0;i<26;i++){
            f[i]=0;
        }
        cin>>str;
        for(int i=0;i<q;i++){
            cin>>c[i];
        }
        int fact;
        for(int i=0;i<n;i++){
            fact = str[i]-97;
            cout<<fact<<endl;
            f[fact]+=1;
            cout<<"f[fact]"<<f[fact]<<endl;
        }
        int sum=0;
        for(int j=0;j<q;j++){

                for(int i=0;i<26;i++){
                        cout<<"f[i]"<<f[i]<<endl;
                    f1= f[i]-c[j];
                    cout<<"f1:"<<f1<<endl;
                    if(f1>=0){
                        sum+=f1;
                    }
                    f1=0;
                }
                cout<<sum<<endl;
            }

            sum=0;


    }
    return 0;
}
