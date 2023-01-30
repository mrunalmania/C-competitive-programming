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
    while(l<=h)
    {
        mid=l+((h-l)/2);
        cout<<a[mid]<<endl;
        cin>>c;
        if(flag==1){
            if(c=='G')
                l=mid+1;
            else if(c=='l')
                h=mid-1;
            else{
                value=a[mid];
                break;
            }
        }
        else{
                if(c=='G')
                {
                    cout<<a[mid-1]<<endl;
                    cin>>c1;
                    if(c1=='G'){
                       l=mid+1;
                    }
                    else if(c1=='L'||c1=='E'){
                        flag=1;
                        cout<<a[mid-1]<<endl;
                        cin>>c2;
                        if(c2=='L'){
                            h=mid-1;
                        }
                        else if(c2=='G'){
                            l=mid+1;
                        }

                    }
                }
                else if(c=='L'){
                    cout<<a[mid+1]<<endl;
                    cin>>c1;
                    if(c1=='L')
                        h=mid-1;
                    else if(c1=='G'||c1=='E'){
                        flag=1;
                        cout<<a[mid+1]<<endl;
                        cin>>c2;
                        if(c2=='L')
                            h=mid-1;
                        else if(c2=='G')
                            l=mid+1;
                    }
                }
                else{
                   /* cout<<a[mid];
                    cin>>c1;
                    if(c1=='e'){
                            value=a[mid];
                            break;
                    }
                    else if(c1=='l'||c1=='G'){
                        flag=1;
                        cout<<a[mid];
                        cin>>c2;
                        if(c2=='e'){
                            value=a[mid];
                            break;
                        }
                        else if(c2=='l'){
                            h=mid-1;
                        }
                        else{
                            l=mid+1;
                        }
                    }*/
                    value=a[mid];
                    break;
                }
        }

    }
    cout<<value<<endl;
    return 0;
}
