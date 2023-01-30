#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int y1,y2,i;
        int m1,m2,s=0;
        cin>>m1>>y1;
        cin>>m2>>y2;

        for( i=y1+1;i<y2;i++){
            if(((i%4==0) && (i%100==0) || (i%400==0))){
                s++;
            }
            else{
                s=s+2;
            }
        }
        if(m1<=2){
            if(((y1%4==0) && (y1%100==0) || (y1%400==0))){
                    s++;
            }
            else{
                    s=s+2;
            }
        }
        else{
            s = s;
        }
        if(m2<=2){
            if(((y1%4==0) && (y1%100==0) || (y1%400==0))){
                    s++;
            }
            else{
                    s=s+2;
            }
        }
        else{
            s = s;
        }

        cout<<s;
        cout<<endl;

    }
    return 0;

}
