#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0,ce=0;
        cin>>n>>k;
        int p[n];
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
            if(p[i]>k)
            {
                ce=ce+(p[i]-k);
            }

        }

        cout<<ce<<endl;
    }
    return 0;
}
