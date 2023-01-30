#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value;
    int flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=i+1;
    int k=300;
    int l=0;int h=n-1;
    int mid;
    char c,c1;
    while(l<=h)//odd is true;
    {
        mid = l+((h-l)/2);
        cout<<a[mid]<<endl;
        cin>>c;
        if(c=='G')
            l=mid+1;
        else if(c=='L')
            h=mid-1;
        else
        {
            flag=1;
            break;
        }
            //break;
        cout<<a[mid]<<endl;
        cin>>c1;
        if(c1=='E')
        {
            flag=1;
            break;
        }


    }
    if(flag==0){//even is true
        l=0;
        h=n-1;
        while(l<=h){
            mid=l+((h-l)/2);
            cout<<a[mid]<<endl;
            cin>>c1;
            if(c1=='E'){
                flag=1;
                break;
            }
            cout<<a[mid]<<endl;
            cin>>c;
             if(c=='G')
                l=mid+1;
            else if(c=='L')
                h=mid-1;
            else
            {
                flag=1;
                break;
            }
        }
    }
    return 0;
}
