#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string str1 = "";
    string str2 = "";
    //cout<<str1.length();
    //cout<<str2.length();
    cin>>str;
    int k=0;
    bool flag = false;
    //int cnt = 0;
    while(k<str.length())
    {
        if(str[k]==str[k+1])
        {
            flag = true;

            if(str1.length()>str2.length())
            {
                str2 = str1;
                str1="";
            }
            k=k+1;
        }
        else
        {
            if(flag)
            {
                flag = false;
                //continue;
            }
            else
            {
                str1+=str[k];

            }

            k++;
        }
    }
    if(str1.length()>str2.length())
    {
        cout<<str1<<endl;

    }
    else
    {
        cout<<str2<<endl;
    }

    return 0;
}
