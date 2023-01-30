#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],arr[m][2];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(m>0)
        {
             for(int i=0;i<m;i++){
                cin>>arr[i][0]>>arr[i][1];
            }
        }

        int i=0,cnt=0,flag=0;
        while(i<n){
            if(i+1 == a[i])
                i++;
            else
            {
                if(m>0)
                {
                     for(int j=0;j<m;j++)
                    {
                        if(((arr[j][0] == a[i]) && (arr[j][1] == a[a[i]-1])) || ((arr[j][1] == a[i]) && (arr[j][0] == a[a[i]-1])))
                         {
                            // cout<<arr[j][0]<<arr[j][1]<<endl;
                             swap(a[i],a[a[i]-1]);
                             flag = 1;
                             break;
                         }

                    }
                    if(flag == 0)
                        {
                           // cout<<"a[i]:"<<a[i]<<a[a[i]-1]<<endl;
                            swap(a[i],a[a[i]-1]);
                            cnt++;
                        }
                }
                else
                {
                    swap(a[i],a[a[i]-1]);
                    cnt++;
                }

            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}
