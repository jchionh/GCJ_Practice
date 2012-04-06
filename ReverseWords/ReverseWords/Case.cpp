#include "Case.h"

#include <iostream>

using namespace std;

// ctor
Case::Case(unsigned int id) : mId(id)
{
}

// dtor
Case::~Case()
{
}

// the function to solve our problem
void Case::Solve()
{
	// output our case id
	cout << "Case #" << mId << ": ";

	// we'll reverse iterate on out vector to reverse all the words
	for (vector<string>::reverse_iterator rit = mWords.rbegin(); rit < mWords.rend(); ++rit)
	{
		cout << *rit << " ";
	}
	cout << endl;
}

