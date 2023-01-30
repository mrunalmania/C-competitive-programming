#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       int m;
        int ar[1001][2];
        for(int i=1;i<1001;i++)
        {
            ar[i][0]=0;
            ar[i][1]=-1;
        }
        int flag=0,flag1=0;
        for(int i=1;i<=n;i++){
            cin>>m;
            if(ar[m][1]==-1 || abs(ar[m][1]-i)==1)
            {
                ar[m][0]++;
                ar[m][1] = i;
            }
            else
            {
                flag =1;
            }

        }
      /*  for(int i=1;i<=1000;i++){
            cout<<ar[i][0]<<ar[i][1]<<endl;
        }*/
        if(flag == 0)
        {
            for(int i=1;i<=1000;i++){
                for(int j=i+1;j<=1000;j++)
                {
                    if(ar[i][0]==ar[j][0] && ar[i][0]!=0 && ar[j][0]!=0){
                        //cout<<ar[i][0]<<ar[j][0]<<endl;
                        flag1=1;
                        break;
                    }
                }
            }
        }
       // cout<<flag<<flag1<<endl;
        if(flag==1 || flag1==1){
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
