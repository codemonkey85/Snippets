// Found at http://stackoverflow.com/questions/6430303/fixed-length-structure-re-arrange-should-i-use-array-or-linked-list

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	const int VECTOR_SIZE = 8;
	
	// Define a template class vector of strings
	typedef vector<string> StrVector;
	
	//Define an iterator for template class vector of strings
	typedef StrVector::iterator StrVectorIt;
	StrVector Tongue_Twister(VECTOR_SIZE);
	StrVectorIt start, end, middle, it;
	
	// location of first element of Tongue_Twister
	start = Tongue_Twister.begin();
	
	// one past the location last element of Tongue_Twister
	end = Tongue_Twister.end();
	
	// Initialize vector Tongue_Twister
	Tongue_Twister[0] = "she";
	Tongue_Twister[1] = "sells";
	Tongue_Twister[2] = "sea";
	Tongue_Twister[3] = "shells";
	Tongue_Twister[4] = "by";
	Tongue_Twister[5] = "the";
	Tongue_Twister[6] = "sea";
	Tongue_Twister[7] = "shore";
	
	middle = start + 3;  // start position for rotating elements
	cout << "Before calling rotate" << endl;
	
	// print content of Tongue_Twister
	cout << "Try this Tongue Twister:";
	for (it = start; it != end; it++)
	{
		cout << " " << *it;
	}
	
	// rotate the items in the vector Tongue_Twister by 3 positions
	rotate(start, middle, end);
	cout << "After calling rotate" << endl;
	cout << "Try this Tongue Twister:";
	for (it = start; it != end; it++)
	{
		cout << " " << *it;
	}
	string empty = "";
	getline(cin, empty);
}
