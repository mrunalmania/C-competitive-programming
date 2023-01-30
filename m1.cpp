#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
    int t,n,temp=0;
    cin>>t;


  //  cin>>n;
    while(t--)
        {   int c=0;
    int sum=0;
    int r;
            int x=19,y=19;
        cin>>n;
        while(c!=n)
        {
            while(x!=0)
            {
                r=x%10;
                sum=sum+r;
                x=x/10;
            }
            if(sum%10==0)
            {
                c++;


            }
            y++;
            x=y;


        }

        else if(i==t)
        {
            x=19;
            y=19;
        }


    }

    return 0;
}
