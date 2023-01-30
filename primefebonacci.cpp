#include<bits/stdc++.h>
#include<string>
using namespace std;
int concat(int a,int b){
    std::string s1 = fmt::format_int(a).str();
    std::string s2 = std::to_string(b);
    std::string s = s1 + s2;
    int c = std::stoi(s);
    return c;
}
int main()
{
    int n1,n2;
    int flag=0,k=0;
    cin>>n1>>n2;
    int pr[n2-n1];
    while(n1<n2){
        flag = 0;
        for(int i = 2; i <= n1/2; ++i)
        {
            if(n1 % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            pr[k]=n1;
            k++;
        }
        ++n1;
    }
   /* for(int i=0;i<k;i++){
        cout<<pr[i]<<" ";
    }*/
    int pr1[k];
    for(int i=0;i<k;i++){
        pr1[i]=pr[i];
    }
    int pr2[n1*n1-1];
    int z=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if(i==j){
                continue;
            }
            else{
                pr2[z]=concat(pr1[i],pr1[j]);
                z++;
            }
        }
    }
    for(int i=0;i<z;i++){
        cout<<pr2[i]<<" ";
    }


}
