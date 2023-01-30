#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sum1(ll c[],int n)
{
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=c[i];
    }
    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n],x,days=0;
        cin>>x;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
       // cout<<sum1(a,n)<<endl;
        ll sum = sum1(a,n);
        while(sum>0)
        {
            days++;
          //  cout<<"sum"<<sum1(a,n)<<endl;
            ll* in1 = std::lower_bound(a,a+n,x);
            int in2 = (in1-a);
            //cout<<"in:"<<in2<<endl;
           if(in2!=n)
            {
                if(a[in2]==x)
                {
                    a[in2]=0;
                }
                else if(a[in2]!=x)
                {
                    ll diff1 = a[in2]-x;
                    if(diff1<(a[in2]/2))
                    {
                        do
                        {
                            in2--;
                        }
                        while(in2>=0 && a[in2]>x);
                        if(in2==-1)
                            {
                                x=x*2;
                                continue;
                            }
                        else
                        {
                            x=a[in2];
                            sum-=a[in2];
                            a[in2]=0;
                        }

                    }

                }

            }
            else if(in2==n)
                {
                    do
                    {
                        in2--;
                    }
                    while(in2>=0 && a[in2]==0);
                    x=a[in2];
                    sum-=a[in2];
                    a[in2]=0;
                }
                x=x*2;
        }
        cout<<days<<endl;
        days=0;

    }
    return 0;
}
