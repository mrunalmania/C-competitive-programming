#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter number of data:";
    cin>>n;

    int r = n%5;
    int n1=n+r;
    int bin1[n];
    for(int i=0;i<n;i++)
    {
        cin>>bin1[i];
    }
     sort(bin1,bin1+n);
     int bin[n1];
    for(int i=0;i<n;i++)
    {
        bin[i]=bin1[i];
    }
    for(int i=n;i<n1;i++)
    {
        bin[i]=0;
    }
    sort(bin,bin+n1);
    int flag;
    cout<<"1.Upper 2.lower";
    cin>>flag;

    int step = n1/5;

    int mem[n1/step][5];
    int boun[n1/step][5];
    int k=0;
 for(int i=0;i<(n1/step);i++)

    {

        for(int j=0;j<5;j++)

        {

            mem[i][j]=bin[k];

            k++;

        }

    }
    cout<<"bin:"<<endl;
for(int i=0;i<(n1/step);i++)

    {

        for(int j=0;j<5;j++)

        {

            cout<<mem[i][j]<<" ";

        }

        cout<<endl;

    }

if(flag == 2)
{
    for(int i=0;i<(n1/step);i++)

    {

        int l = mem[i][0];

        boun[i][0]=mem[i][0];

        for(int j=1;j<4;j++)

        {
                boun[i][j]=l;
        }

    }
}
else if(flag == 1)
{
    for(int i=0;i<(n1/step);i++)

    {
        int u = mem[i][4];

        boun[i][4]=mem[i][4];

        for(int j=1;j<4;j++)

        {
            boun[i][j]=u;
        }
    }


}
else
{
    cout<<"enter valid choice";
}



for(int i=0;i<(n1/step);i++)

    {

        for(int j=0;j<5;j++)

        {

            cout<<boun[i][j]<<" ";

        }

        cout<<endl;

    }
return 0;

}
