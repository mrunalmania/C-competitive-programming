#include<bits/stdc++.h>
using namespace std;
long long maxPairWiseProduct(int a[],int s)
{
    long long result;
    int max_i = -1;
    for(int i=0;i<s;i++)
    {
        if(max_i == -1||a[i]>a[max_i])
        {
            max_i = i;
        }
    }
    int max_j = -1;
    for(int j=0;j<s;j++)
    {
        if(j!=max_i &&  (max_j == -1 || a[j]>a[max_j]))
        {
            max_j = j;
        }
    }

    return ((long long)a[max_i])*a[max_j];
}
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long result = maxPairWiseProduct(arr,n);
    cout<<result;
    return 0;
}
