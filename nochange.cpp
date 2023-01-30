#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,in,d;
        long long int p,k;
        int flag = 0,flag1 = 0;
        cin>>n>>p;
        long long c[n],cnt[n];
        int diff[n];
        for(int i=0;i<n;i++){
            cin>>c[i];
            cnt[i]=0;
        }

        for(int i=0;i<n;i++){
            if(p%c[i] != 0 && p%c[i]!=p){
                d = p/c[i];
                d=d+1;
                in = i;
                flag = 1;
                break;
            }
            else if(p%c[i] == p){
                d = 1;
                in = i;
                flag = 1;
                break;
            }

        }



         if(flag == 1){
            cout<<"YES";
            for(int i=0;i<n;i++){
                if(i == in){
                    cout<<d<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
        else{

            for(int i=n-1;i>=0;i--){
                if(p%c[i] == 0){
                    p = p-c[i];
                    cnt[i]++;
                    if(p<0){
                        break;
                    }
                    continue;

                }
                else if(p%c[i]!=0){
                    d = p/c[i];
                    cnt[i] = cnt[i]+d+1;
                    p=p-c[i]*cnt[i];
                    if(p<0){
                        break;
                    }
                    continue;
                }

            }
            if(p<0){
                flag1 = 1;
            }
            if(p>=0){
                flag1 = 0;
            }
            if(flag1 == 1){
                cout<<"YES";
                for(int i=0;i<n;i++){
                    cout<<cnt[i]<<" ";
                }
            }
            else if(flag1 == 0){
                cout<<"NO";
            }
        }

        cout<<endl;

    }
    return 0;
}
