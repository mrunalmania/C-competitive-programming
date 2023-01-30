#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        std::string str;
        cin>>str;
        //cout<<str;
        int n = str.length();
        //cout<<n;
        int cnt=0;
        char ptr[n];
        int p[n];
        for(int i=0;i<n;i++)
            p[i]=0;
        strcpy(ptr,str.c_str());
        for(int i=1;i<n-2;i++)
        {
            if(p[i]!=1 && p[i-1]!=1 && ptr[i]!=ptr[i-1])
            {
                p[i]=1;
                p[i-1]=1;
                cnt++;

            }
            else if(p[i]!=1 && p[i+1]!=1 && ptr[i]!=ptr[i+1])
            {
                p[i]=1;
                p[i+1]=1;
                cnt++;
            }
        }
        //int res = std::min(cntx,cnty);
        cout<<cnt<<endl;
    }
    return 0;
}

