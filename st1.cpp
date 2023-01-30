#include<bits/stdc++.h>
using namespace std;
int const MAX = 10000005;
bool prime[MAX];
void doPrime()
{
    memset(prime,true,sizeof(prime));
    for(int i=2;i*i<=MAX;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i;j<=MAX;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}
int getMid(int s,int e)
{
    int mid = s+(e-s)/2;
    return mid;
}
int main()
{

}
