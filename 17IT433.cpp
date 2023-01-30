#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of bin values: ";
    cin>>n;
    int bin[100];
    for(int i=0;i<n;i++)
    {
        cin>>bin[i];
    }

    sort(bin,bin+n);
    int x;
    if(n%5!=0)
    {
        x=(5-n%5);

    }
    else
    {
        x = 0;
    }

    for(int i=0;i<x;i++){
        bin[n+i]=0;
    }
    n=n+x;
    int arr[5][100];
    int k=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<(n/5);j++){
        arr[i][j] = bin[k++];
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int flag;
    cout<<"0.Lower\n1.Upper\n";
    cin>>flag;
    for(int i=0;i<5;i++)
    {
        int l=arr[i][0];
        int r=arr[i][(n/5)-1];
        for(int j=0;j<(n/5);j++)
        {
            if(flag==0)
                arr[i][j]=l;
            else
                arr[i][j]=r;
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<(n/5);j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
