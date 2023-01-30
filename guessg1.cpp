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
    int l=0;
    int h=n-1;
    int mid;
    char c,c1,c2;
    while(l<=h && k>0)
    {
        mid=l+((h-l)/2);
        cout<<a[mid]<<endl;
        k--;
        cin>>c;
        if(c=='G')
        {
            cout<<a[mid-1]<<endl;
            k--;
            cin>>c1;
            if(c1=='G')
                l=mid+1;
            else if(c1=='L')
            {
                //flag=1;
                cout<<a[mid-1]<<endl;
                k--;
                cin>>c2;
                if(c2=='G')
                    l=mid+1;
                else if(c2=='L')
                    h=mid-1;
                else
                    break;
            }
            else
            {
                break;
            }
        }
        else if(c=='L')
        {
            cout<<a[mid+1]<<endl;
            k--;
            cin>>c1;
            if(c1=='L')
                h=mid-1;
            else if(c1=='G')
            {
                cout<<a[mid+1]<<endl;
                k--;
                cin>>c2;
                if(c2=='G')
                    l=mid+1;
                else if(c2=='L')
                    h=mid-1;
                else
                    break;
            }
            else
                break;
        }
        else
            break;
    }
    return 0;
}

