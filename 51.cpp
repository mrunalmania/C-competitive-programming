#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a=10,h,n,b=0,f,g,i,s=0,c,j=2,k;
    cin>>n;
    a=10;
    c=n-1;
    f=n;
    while(f!=0)
    {
        b=b+f*2;
        f--;
    }
    f=n;
    b=b*10;
    for(i=1;i<=n;i++)
    {
        if(i>1)
        {   j=1;
            while(j!=i)
            {
                cout<<"**";
                j++;
            }
        }
        g=f;
        while(g!=0)
        {
            cout<<a;
            a=a+10;
            g--;
        }
        h=f;
        b=b-(f-1)*10;
        while(h!=0)
        {
            cout<<b;
            b=b+10;
            h--;
            if(h==0)
            {
                printf("\b \n");
            }
        }
        b=b-(f+1)*10;
        f--;
    }
    return 0;
}
