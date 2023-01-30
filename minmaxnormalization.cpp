#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter array length:";cin>>n;

    float arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    float max1 = *max_element(arr,arr+n);
    cout<<max1<<endl;
    float min1 = *min_element(arr,arr+n);
    float diff1 = max1-min1;
    for(int i=0;i<n;i++)
    {
        arr[i]-=min1;
    }

    for(int i=0;i<n;i++)
    {
        arr[i]/=diff1;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int max2,min2;
    cout<<"normalize with user:"<<endl;
    cout<<"enter min max value to bound an array:";
    cin>>min2>>max2;

    int diff2 = max2-min2;
    for(int i=0;i<n;i++)
    {
        arr[i] = ceil(arr[i]*diff2)+min2;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}
