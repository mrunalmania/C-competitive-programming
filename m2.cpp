#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=1,i,x,r;
        cin>>n;
        int sum=0;
            for(i=19;i<1000 && m<=n;i++)
            {   sum=0;
                x=i;
            while(x)
            {
                r=x%10;
                sum=sum+r;
                x=x/10;
            }
            if(sum%10==0)
            {
                m++;
            }
            if(m==n+1)
            {
                cout<<i<<endl;
            }
            }

    }

    return 0;
}
