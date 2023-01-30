#include<iostream>
using namespace std;
double findMod(double a, double b)
{
    // Handling negative values
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    // Finding mod by repeated subtraction
    double mod = a;
    while (mod >= b)
        mod = mod - b;

    // Sign of result typically depends
    // on sign of a.
    if (a < 0)
        return -mod;

    return mod;
}
int main()
{
    double a,b;
    cin>>a;
    cin>>b;
    if(findMod(a,5)==0.0)
    {
        if(a<=b)
        {
            b=b-a-0.5;
            cout<<b;
        }
        else
        {
            cout<<b;
        }
    }
    else
    {
        cout<<b;
    }
}
