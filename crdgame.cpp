#include<bits/stdc++.h>
using namespace std;
int digSum(int n)
{
    int sum = 0;
    while(n > 0 || sum > 9)
    {
        if(n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
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
        int a,b;
        int a1,b1;
        int c=0,m=0;
        for(int i=0;i<n;i++){
            cin>>a;
            cin>>b;
            a1=digSum(a);
            b1=digSum(b);
            if(a1>b1)
                c++;
            else if(b1>a1)
                m++;
            else
            {
                m++;
                c++;
            }
        }
        if(c>m)
            cout<<0<<" "<<c<<endl;
        else if(c<m)
            cout<<1<<" "<<m<<endl;
        else
            cout<<2<<" "<<c<<endl;
    }
}
