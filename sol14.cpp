#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,cnt=0;
        float a,b,c,max1,diff,sq;
        cin>>n>>m;
        double x[n],y[m];
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<m;i++){
            cin>>y[i];
        }
        for(int i=0;i<m-1;i++){
            for(int j=1;j<=m-1;j++){
                b = abs(y[i]-y[i+j]);
                for(int k=0;k<n;k++){
                    a=sqrt(pow(x[k],2.0)+pow(y[i],2.0));
                    c=sqrt(pow(x[k],2.0)+pow(y[i+j],2.0));
                    max1 = a > b ? (a > c ? a : c) : (b > c ? b : c);
                    if(max1 == a){
                        sq = sqrt(pow(b,2)+pow(c,2));
                    }
                    else if(max1 == b){
                        sq = sqrt(pow(a,2)+pow(c,2));
                    }
                    else{
                        sq = sqrt(pow(a,2)+pow(b,2));
                    }
                    diff = abs(sq - max1);
                    if(diff==0){
                        cnt++;
                    }
                }

            }
           // cout<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;

        }
         for(int i=0;i<n-1;i++){
            for(int j=1;j<=n-1;j++){
                b = abs(x[i]-x[i+j]);
                for(int k=0;k<m;k++){
                    a=sqrt(pow(y[k],2.0)+pow(x[i],2.0));
                    c=sqrt(pow(y[k],2.0)+pow(x[i+j],2.0));
                    max1 = a > b ? (a > c ? a : c) : (b > c ? b : c);
                    //cout<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
                    if(max1 == a){
                        sq = sqrt(pow(b,2)+pow(c,2));
                    }
                    else if(max1 == b){
                        sq = sqrt(pow(a,2)+pow(c,2));
                    }
                    else{
                        sq = sqrt(pow(a,2)+pow(b,2));
                    }
                    //cout<<"max1:"<<max1<<"sq:"<<sq<<endl;
                    diff = std::abs(sq - max1);
                    if(diff==0){
                            //cout<<"actudiff:"<<diff<<endl;
                        cnt++;
                    }
                }

            }
             //cout<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
         }
         cout<<cnt<<endl;
    }
    return 0;
}
