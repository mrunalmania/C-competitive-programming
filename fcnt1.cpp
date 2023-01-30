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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int i=0,cnt=0;
        int res[n];
        while(i<n)
        {
            int j = i;
            while(j>0)
            {
                if(abs(arr[j-1]-arr[j])<3)
                {
                    cnt++;
                    j--;
                }
                else
                    j--;

            }
            j = i;
            while(j<n-1)
            {
                if((arr[j+1]-arr[j])<3)
                {
                    cnt++;
                    j++;
                }
                else
                    j++;
            }
            res[i] = cnt;
            cnt=0;i++;

        }
        sort(res,res+n);
        cout<<res[0]<<" "<<res[n-1]<<endl;
    }
    return 0;
}
