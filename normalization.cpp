#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter array length:";cin>>n;
    vector <float> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int choice;
    cout<<"1.min_max normalization\n2.z_score normalization\n3.decimal scaling\n";
    cin>>choice;
    if(choice==1){
        cout<<"Enter new Minimum and new Maximum:";
        float nmin,nmax;
        float max=*max_element(a.begin(),a.end());
        float min=*min_element(a.begin(),a.end());
        cin>>nmin>>nmax;
        for(int i=0;i<n;i++){
            a[i]=((a[i]-min)*(nmax-nmin))/(max-min) + nmin;
        }
    }
    else if(choice==2){
        float mean=(accumulate(a.begin(),a.end(),0.0))/n;
        float stdev=0;
        for(int i=0;i<n;i++){
            stdev+=(a[i]-mean)*(a[i]-mean);
        }
        stdev/=n;
        stdev=sqrt(stdev);
        cout<<mean<<" "<<stdev<<endl;
        for(int i=0;i<n;i++){
            a[i]=(a[i]-mean)/stdev;
        }
    }
    else{
        int max=*max_element(a.begin(),a.end());
        int j=0;
        while(max>0){
            max=max/10;
            j++;
        }
        for(int i=0;i<n;i++){
            a[i]=a[i]/pow(10,j);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
