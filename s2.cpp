#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char q[n],q1[n];
    for(int i=0;i<n;i++)
    {
        cin>>q[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>q1[i];
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        char a = q[i];
        for(int j=0;j<n;j++)
        {
            if(a==q1[j])
            {
                q1[j]='A';
                flag=0;
                break;

            }
            else
            {
                flag=1;
            }

        }
        if(flag==1)
            break;
    }
    int cnt=0;
   /* for(int i=0;i<n;i++)
    {
        cout<<q1[i];
    }*/
    //cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(q1[i]!='A')
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
