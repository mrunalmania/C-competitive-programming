#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int cnt5=0,cnt10=0,cnt15=0,flag=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==5)
                cnt5++;
            else if(a[i]==10)
                {
                    if(cnt5>0)
                    {
                        cnt10++;
                        cnt5--;
                    }
                    else
                    {
                        flag=1;
                    }
                }
            else
            {
                if(cnt10>0)
                {
                    cnt10--;
                    cnt15++;
                }
                else if(cnt5>1)
                {
                    cnt5-=2;
                    cnt15++;
                }
                else
                {
                    flag=1;
                }

            }

        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
