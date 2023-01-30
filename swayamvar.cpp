#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   vector<int>q;
   vector<int>q1;
   string str;
   getline(cin,str);
   char ch[n+1];
   strcpy(ch,str.c_str());
   for(int i=0;i<n;i++)
   {
       if(ch[i]=='r')
            q.push_back(0);
       else if(ch[i]=='m')
            q.push_back(1);
        else
        {
            break;
        }
   }
   string str1;
   std::cin.clear();
   getline(cin,str1);
   char ch1[n+1];
   strcpy(ch1,str1.c_str());
   for(int i=0;i<n;i++)
   {
       if(ch1[i]=='r')
            q1.push_back(0);
       else if(ch1[i]=='m')
            q1.push_back(1);
        else
            break;
   }
    vector<int>::iterator it=q1.begin();
    vector<int>::iterator itr=q.begin();
    while(it!=q1.end())
    {
        it=q1.begin();
        itr=q.begin();
        if(*itr==*it)
        {
            q.erase(itr);
            q1.erase(it);
        }
        else
        {
            int a = *it;
            vector<int>::iterator i1 = q1.end();
            q1.push_back(*it);
            q1.erase(it);
        }
    }
    cout<<q1.size()<<endl;
   // return 0;

}
