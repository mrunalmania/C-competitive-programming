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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int mon[n+1];
        for(int i=1;i<n+1;i++)
        {
            mon[i]=i;
        }
        int flag=0;
        int cnt=0;
        while(flag!=1)
        {
            int pre[n+1];
            for(int i=1;i<n+1;i++)
            {
                pre[i]=mon[i];
            }
            cnt++;
            for(int i=0;i<n;i++)
            {

                mon[arr[i]]=pre[i+1];
            }
            flag=1;
            for(int i=1;i<n+1;i++)
            {
                if(mon[i]!=i)
                {
                    flag=0;
                    break;
                }
            }
        }
        cout<<cnt<<endl;

    }
}
