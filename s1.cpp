#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> q;
    vector<int> q1;
    cin>>n;
    string s1;
    cin>>s1;
    for(int i=0;i<s1.size();i++)
    {
        if(s1.at(i)=='r')
            q.push_back(0);
        else if(s1.at(i)=='m')
            q.push_back(1);
        else
            break;
    }

    std::cin.clear();
    string s2;
    cin>>s2;
    for(int i=0;i<s2.size();i++)
    {
        if(s2.at(i)=='r')
            q1.push_back(0);
        else if(s2.at(i)=='m')
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
            it=q1.begin();
            itr = q.begin();
        }
        else
        {
            int a = *it;
            vector<int>::iterator i1 = q1.end();
            q1.push_back(*it);
            q1.erase(it);
            it=q1.begin();
        }


    }
    cout<<q1.size()<<endl;
    return 0;
}
