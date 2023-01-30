#include<bits/stdc++.h>
using namespace std;
bool isPrime(int a)
{
    if(a%2==0)
        return false;
    for(int i=3;i<a;i++)
    {
        if(a%i==0)
            return false;
    }
    return true;
}
int p1[500];
int main()
{

    int d,p;
    cin>>d>>p;
    int step = d/p;
    //cout<<(d/p)<<endl;
    int k=0;
    //cout<<endl;
    for(int i=2;i<=d/p;i++)
    {
        if(isPrime(i))
        {
            p1[k]=i;
            k++;
            //cout<<i<<" ";
        }
    }
    //cout<<endl;

    p--;
    while(p>0)
    {
        for(int i=0;i<k;i++)
        {
            //cout<<"old:"<<p1[i]<<" ";
            if(p1[i]!=-1)
            {
                if(isPrime(p1[i]+step))
                {
                    p1[i] = p1[i]+step;

                }
                else
                {
                    p1[i] = -1;
                }


            }
            //cout<<p1[i]<<" ";
        }
        //cout<<endl;
        p--;
    }
    int cnt = 0;
    for(int i=0;i<k;i++)
    {
        //cout<<p1[i]<<" ";
        if(p1[i]!=-1)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
