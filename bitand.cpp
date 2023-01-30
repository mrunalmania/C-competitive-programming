#include<bits/stdc++.h>
using namespace std;
unsigned  nbits(int n){
    return (int)log2(n)+1;
}
int f(int x,int y,int z){
    int ans = (x & z)*(y & z);
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,l,r,m1=0,mi1=0;
        cin>>x>>y>>l>>r;
        //cout<<f(28,19,15)<<" "<<f(28,19,14)<<" "<<f(28,19,13)<<" "<<f(28,19,7)<<endl;
        int a = nbits(std::max(x,y));
        //int b = nbits(y);
        int ax[a];
        int ay[a];
        int n = x;
        for(int i=a-1;i>=0;i--){
            ax[i] = (n%2);
            n=n/2;
        }
        n = y;
        for(int i=a-1;i>=0;i--){
            ay[i] = (n%2);
            n=n/2;
        }
       int ans[a];
       n = 0;
       while(n<a){
            if(ax[n]==1||ay[n]==1){
                ans[n]=1;
            }
            else if(ax[n]==0 && ay[n]==0){
                ans[n]=0;
            }
            n++;
       }
       int ans1=0;
       for(int i=0;i<a;i++){
           // cout<<ans[i];
            ans1+=(ans[i]*pow(2,a-1-i));
       }
       cout<<ans1<<endl;
        /*int m = pow(2,a)-1;
        cout<<f(x,y,m)<<" "<<f(x,y,m-1)<<" "<<f(x,y,m-2)<<" "<<f(x,y,m-3)<<" "<<f(x,y,m-4);
        */
    }

    return 0;
}
