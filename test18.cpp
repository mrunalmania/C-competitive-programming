// CPP program to concatenate
// two integers into one

#include <iostream>
#include <string>
using namespace std;

// Function to concatenate
// two integers into one
int concat(int a, int b)
{

	// Convert both the integers to string
	string s1 = itos(a);
	string s2 = ito(b);

	// Concatenate both strings
	string s = s1 + s2;

	// Convert the concatenated string
	// to integer
	int c = stoi(s);

	// return the formed integer
	return c;
}

int main()
{
	int a = 23;
	int b = 43;

	cout << concat(a, b) << endl;

	return 0;
}

// This code is contributed by Ayush Singla(@ayusin51)
