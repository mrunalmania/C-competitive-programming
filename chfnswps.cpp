#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int flag=1;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i])
                flag=0;
        }
        if(flag){
            cout<<0<<endl;
            continue;
        }
        int k=0,cnt1=0,cnt2=0;
        int m=-1;
        int j;
        while(k<n){
            for(int i=k;i<n;i++){
                if(a[i]!=b[i]){
                    k=i;
                    cout<<"k"<<k<<endl;
                    break;
                }
            }
            int cnt=-1;
            while(k<n){
                cnt2++;
                if((a[k+1]==a[k])&&(b[k+1]==b[k])){
                    k+=2;
                    if(cnt==-1)
                        cnt=0;
                    cnt+=2;
                }
                else{
                    break;
                }
            }
            cout<<"k1"<<k<<endl;
            cout<<"cnt"<<cnt<<endl;
            j=k;
            if(cnt%2==0){
                cnt1+=((cnt/2)*std::min(a[k-1],b[k-1]));
            }
            else{
                cnt1=-1;
                break;
            }
        }
        cout<<cnt1<<endl;

    }
    return 0;
}
