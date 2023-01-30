#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    while(q--)
    {
        int n,m,a,b;
        cin>>n>>m;
        int adj[n+1][n+1],visited[n+1];
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                adj[i][j]=0;
            }
        }
        for(int i=0;i<m;i++)
        {
            cin>>a>>b;
            adj[a][b]=adj[b][a]=1;
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
        }


    }
    return 0;
}
