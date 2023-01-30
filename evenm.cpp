#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k=1;
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            cnt=0;
            if(i%2!=0)
            {
                while(cnt<n && k<=pow(n,2))
                {
                    cout<<k<<" ";
                    cnt++;
                    k++;
                }
                cout<<endl;
            }
            else
            {
                k=k+n-1;
                while(cnt<n && k<=pow(n,2))
                {
                    cout<<k<<" ";
                    cnt++;
                    k--;
                }
                k=k+n+1;
                cout<<endl;
            }

        }
    }
}
