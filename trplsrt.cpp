#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,m=0;

        cin>>n>>k;
        int p[n];
        int rec[k][3];
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        int i=0,j=n-1;
        while(i<j){
            if(p[j]==(j+1))
            {
                j--;
                continue;
            }
            else
            {
                if(p[i]==(i+1))
                {
                    i++;
                    continue;
                }
                else
                {
                    rec[m][0]=p[i];
                    rec[m][1]=p[i+1];
                    rec[m][2]=p[j];
                    int temp = p[i];
                    int temp1 = p[i+1];
                    p[i] = p[j];
                    p[i+1] = temp;
                    p[j] = temp1;
                    m++;


                }
            }


        }
       if(m>k){
            cout<<-1<<endl;
        }
        else
        {
            cout<<m<<endl;
            for(int i=0;i<m;i++)
            {
                cout<<rec[i][0]<<" "<<rec[i][1]<<" "<<rec[i][2]<<endl;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
