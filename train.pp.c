#include<bits/stdc++.h>
using namespace std;
int shc[n][2];
void traspose(int mat[MAX])
int main()
{
    int n
    cin>>n;
    int flag = 0;
    for(int i =0;i<n;i++)
    {
        cin>>shc[i][0];
        cin>>shc[i][1];
    }
    int plt = 1;
    int step[86400];
    int step[plt] = shc[0][1];
    for(int i=1;i<n;i++)
    {
        int tr = plt;
        while(tr>0)
        {
            if(step[plt]<shc[i][0])
            {
                step[plt]=shc[i][0]+shc[i][1];
                flag = 1;
            }
            tr--;
        }
        if(flag == 0)
        {
            plt++;
            step[plt]=shc[i][0]+shc[i][1];
        }

    }
    cout<<plt<<endl;
    return 0;

}
