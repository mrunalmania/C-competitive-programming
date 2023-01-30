#include<bits/stdc++.h>
using namespace std;
vector<int>seg;
void build(int ar[],int low ,int high,int pos)
{
    if(low==high)
    {
        seg[pos]=ar[low];
        return;
    }
    int mid=(low+high)/2;
    build(ar,low,mid,2*pos+1);
    build(ar,mid+1,high,2*pos+2);
    seg[pos]=seg[2*pos+1] | seg[2*pos+2];
}
int main()
{
    int a;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    build(ar,0,a-1,0);
    for(int i=0;i<seg.size();i++)
        cout<<seg[i]<<" ";

    return 0;
}
