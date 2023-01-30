#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[3][n];
    char res[100000];
    char mask[3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int j = 0;
    int m = 0;
    int k = 0;
    while(j<n)
    {
        if(arr[0][j]=='#' && arr[1][j]=='#' && arr[2][j]=='#')
        {
            j++;
            res[m] = '#';
            m++;
            k=0;
        }
        else if(arr[0][j]=='.' && arr[1][j]=='.' && arr[2][j]=='.')
        {
            j++;
        }
        else
        {
            if(arr[0][j]=='.' && arr[0][j+1]=='*' && arr[0][j+2]=='.')
            {
                if(arr[1][j]=='*' && arr[1][j+1]=='*' && arr[1][j+2]=='*')
                {
                    if(arr[2][j]=='*' && arr[2][j+1]=='.' && arr[2][j+2]=='*')
                    {
                        res[m] = 'A';
                        m++;
                        j=j+3;
                    }
                    else
                    {
                        j++;
                    }
                }
                else
                {
                    j++;
                }
            }
            else if(arr[0][j]=='*' && arr[0][j+1]=='*' && arr[0][j+2]=='*')
            {
                if(arr[1][j]=='*' && arr[1][j+1]=='*' && arr[1][j+2]=='*')
                {
                    if(arr[2][j]=='*' && arr[2][j+1]=='*' && arr[2][j+2]=='*')
                    {
                        res[m] = 'E';
                        m++;
                        j=j+3;
                    }
                    else
                    {
                        j++;
                    }
                }
                else if(arr[1][j]=='.' && arr[1][j+1]=='*' && arr[1][j+2]=='.')
                {
                    if(arr[2][j]=='*' && arr[2][j+1]=='*' && arr[2][j+2]=='*')
                    {
                        res[m] = 'I';
                        m++;
                        j=j+3;
                    }
                    else
                    {
                        j++;
                    }
                }
                else if(arr[1][j]=='*' && arr[1][j+1]=='.' && arr[1][j+2]=='*')
                {
                    if(arr[2][j]=='*' && arr[2][j+1]=='*' && arr[2][j+2]=='*')
                    {
                        res[m] = 'O';
                        m++;
                        j=j+3;
                    }
                    else
                    {
                        j++;
                    }
                }
                else
                {
                    j++;
                }
            }
            else if(arr[0][j]=='*' && arr[0][j+1]=='.' && arr[0][j+2]=='*')
            {
                if(arr[1][j]=='*' && arr[1][j+1]=='.' && arr[1][j+2]=='*')
                {
                    if(arr[2][j]=='*' && arr[2][j+1]=='*' && arr[2][j+2]=='*')
                    {
                        res[m] = 'U';
                        m++;
                        j=j+3;
                    }
                    else
                    {
                        j++;
                    }
                }
                else
                {
                    j++;
                }
            }
            else
            {
                j++;
            }

        }
    }
    for(int g=0;g<m;g++)
    {
        cout<<res[g];
    }
    return 0;
}
