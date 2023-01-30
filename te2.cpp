// C++ program to demonstrate the use of std::max_element
#include <iostream>
#include <algorithm>
using namespace std;

// Defining the BinaryFunction
bool comp(int a, int b)
{
	return (a < b);
}

int main()
{
	int v[] = { 9, 4, 7, 2, 5, 10, 11, 12, 1, 3, 6 };

	// Finding the maximum value between the third and the
	// ninth element

	int* i1;
	i1 = std::max_element(v + 2, v + 9, comp);
    *i1 = *i1/2;
	for(int i=0;i<11;i++)
    {
        cout<<v[i]<<" ";
    }
	return 0;
}
