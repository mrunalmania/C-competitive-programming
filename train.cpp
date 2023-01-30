#include<bits/stdc++.h>
#define MAX 100000
using namespace std;
int shc[100000][2];
int shc1[100000][2];
int main()
{
    int n;
    cin>>n;
    int flag = 0;
    for(int i =0;i<n;i++)
    {
        cin>>shc[i][0];
        cin>>shc[i][1];
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = shc[i][0];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==shc[j][0])
            {
                shc1[i][0] = shc[j][0];
                shc1[i][1] = shc[j][1];
                break;
            }
        }
    }
    int plt = 1;
    int step[86400];
    step[plt] = shc1[0][0]+shc1[0][1];
    for(int i=1;i<n;i++)
    {
        int tr = plt;
        while(tr>0)
        {
            if(step[plt]<shc1[i][0])
            {
                step[plt]=shc1[i][0]+shc1[i][1];
                flag = 1;
                break;
            }
            tr--;
        }
        if(flag == 0)
        {
            plt++;
            step[plt]=shc1[i][0]+shc1[i][1];
            sort(step,step+plt+1);
        }

    }
    cout<<plt<<endl;
    return 0;

}
