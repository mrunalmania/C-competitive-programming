#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long r1,r2,r3,v1,v2,v3,n;
        cin>>r1>>r2>>r3;
        cin>>v1>>v2>>v3;
        cin>>n;

        long d1,d2,d3;
        d1 = v1*n;
        d2 = v2*n;
        d3 = v3*n;
        int flag = 1;
        long a1,a2,a3;
        a1 = r1*d1;
        a2 = r2*d2;
        a3 = r3*d3;
        if(a1>360)
        {
            long  m = a1/360;
            a1-=m*360;
        }
        if(a2>360)
        {
            long m  = a2/360;
            a2-=m*360;
        }
        if(a2>360)
        {
            long m = a3/360;
            a2-=m*360;
        }
        if(a1==a2)
        {
            if(a2==a3)
                flag = 1;
            else
                flag = 0;
        }
        else
            flag = 0;

        if(flag)
            cout<<"TRUE"<<endl;
        else
            cout<<"FALSE"<<endl;
    }
    return 0;
}
