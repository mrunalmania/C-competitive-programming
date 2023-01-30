#include<bits/stdc++.h>
using namespace std;
int bitScore(int a)
{
    int max1;
    int min1;
    int a1=a%10;
    int a3=a/100;
    a=a-(a3*100);
    int a2 = a/10;
    max1=std::max(std::max(a1,a2),a3);
    min1 = std::min(std::min(a1,a2),a3);
    int bs = (max1*11)+(min1*7);
    if(bs>99)
        bs=bs%100;
    return bs;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int bita[n];
    for(int i=0;i<n;i++)
    {
        bita[i]=bitScore(arr[i]);
    }
   /* for(int i=0;i<n;i++)
    {
        cout<<bita[i]<<endl;
    }*/
    vector<int>odd;
    vector<int>even;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            odd.push_back(bita[i]);
        else
            even.push_back(bita[i]);
    }
    int cnt[10],cnt1[10];
    for(int i=0;i<10;i++)
    {
        cnt[i]=0;
        cnt1[i]=0;
    }
    int l1=odd.size();
    for(int i=0;i<l1;i++)
    {
        int pa = odd[i]/10;
        cnt[pa]++;
    }
    int l2 = even.size();
    for(int i=0;i<l2;i++)
    {
        int pa = even[i]/10;
       // cout<<"pa"<<pa<<endl;
        cnt1[pa]++;
    }
    /* for(int i=0;i<even.size();i++)
    {
        cout<<even[i]<<endl;
    }*/
    int ans=0;
    for(int i=0;i<10;i++)
    {
        if(cnt[i]==cnt1[i])
        {
            if(cnt[i]>2)
                ans=ans+2;
            else if(cnt[i]==2)
                ans=ans+1;
            else if(cnt[i]==0||cnt[i]==1)
                ans+=0;
        }
        else if(cnt[i]>cnt1[i])
        {
            if(cnt[i]>2)
                ans=ans+2;
            else if(cnt[i]==2)
                ans=ans+1;
            else if(cnt[i]==0||cnt[i]==1)
                ans+=0;
        }
        else if(cnt[i]<cnt1[i])
        {
            if(cnt1[i]>2)
                ans=ans+2;
            else if(cnt1[i]==2)
                ans=ans+1;
            else if(cnt1[i]==0||cnt1[i]==1)
                ans+=0;
        }
    }
    cout<<ans<<endl;
    return 0;

}
