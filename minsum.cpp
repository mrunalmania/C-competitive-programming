#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
    int n,k,m;
    int sum=0;
    cin>>n>>k;
    //int arr[n];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        cin>>m;
        arr[i] = m;
    }

    for(int i=0;i<k;i++){
        int *i1;
        i1 = std::max_element(arr,arr+n);
        *i1 = *i1/2;
    }
    for(int i=0;i<n;i++)
    {
        //cout<<arr[i]<<" ";
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
