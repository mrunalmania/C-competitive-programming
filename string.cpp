#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.length();
        char car[n+1];
        strcpy(car,s.c_str());
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=car[i];
        }
        if(sum%4==0){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}
