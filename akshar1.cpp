#include<bits/stdc++.h>
#define l long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,k;
        cin>>n>>k;
        long q[n];
        for(long i=0;i<n;i++)
        {
            cin>>q[i];
        }
        long rem=0;
        long days = 0;
        for(l i=0;i<n;i++)
        {
            q[i]+=rem;
            if(q[i]>=k)
            {
                rem=q[i]-k;
                //cout<<"rem:"<<rem<<endl;
            }


            else if(q[i]<k)
            {
                days = i+1;
                break;
            }
        }
        days = n;
        if(rem==0)
            cout<<days<<endl;
        else
        {
            while(rem>=k)
            {
                rem-=k;
                days++;
            }
            cout<<days+1<<endl;
        }
    }
    return 0;
}
