#include<bits/stdc++.h>

using namespace std;



int main()

{

    int n;

    cin>>n;

    int bin[n];

    for(int i=0;i<n;i++)

    {

        cin>>bin[i];

    }



    sort(bin,bin+n);



    int step;

    cin>>step;

    int mem[n/step][step];

    int mean[n/step][step];

    int boun[n/step][step];

    int k=0;



    for(int i=0;i<(n/step);i++)

    {

        for(int j=0;j<step;j++)

        {

            mem[i][j]=bin[k];

            k++;

        }

    }



    for(int i=0;i<(n/step);i++)

    {

        for(int j=0;j<step;j++)

        {

            cout<<mem[i][j]<<" ";

        }

        cout<<endl;

    }



    for(int i=0;i<(n/step);i++)

    {

        int sum=0;

        for(int j=0;j<step;j++)

        {

            sum+=mem[i][j];

        }

        int mean1 = sum/step;

        for(int j=0;j<step;j++)

        {

            mean[i][j]=mean1;

        }

    }



    for(int i=0;i<(n/step);i++)

    {

        for(int j=0;j<step;j++)

        {

            cout<<mean[i][j]<<" ";

        }

        cout<<endl;

    }



    for(int i=0;i<(n/step);i++)

    {

        int l = mem[i][0];

        boun[i][0]=mem[i][0];

        int r = mem[i][step-1];

        boun[i][step-1]=mem[i][step-1];

        for(int j=1;j<step-1;j++)

        {

            int diff = abs(mem[i][j]-l);

            int diff1 = abs(mem[i][j]-r);

            if(diff<diff1)

                boun[i][j]=l;

            else if(diff>=diff1)

                boun[i][j]=r;

        }

    }



    for(int i=0;i<(n/step);i++)

    {

        for(int j=0;j<step;j++)

        {

            cout<<boun[i][j]<<" ";

        }

        cout<<endl;

    }



}

