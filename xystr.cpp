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
        for(int i=1;i<n;)
        {
            if(ptr[i]!=ptr[i-1])
            {
                cnt++;
                i=i+2;

            }
            else
            {
                i++;
            }
        }
        //int res = std::min(cntx,cnty);
        cout<<cnt<<endl;
    }
    return 0;
}
