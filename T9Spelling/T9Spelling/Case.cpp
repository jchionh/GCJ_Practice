#include <iostream>
#include <sstream>

#include "Case.h"
#include "T9Map.h"

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
	// get a pointer to our singleton instance
	T9Map* map = T9Map::Instance();

	// output our case id
	cout << "Case #" << mId << ": ";

	// dummy previous code
	string prevCode = "!";

	// now iterate every chracter in our sentence
	size_t size = mSentence.size();
	for (size_t i = 0; i < size; ++i)
	{
		// get our current code
		char character = mSentence[i];
		string currentCode = map->Map(character);

		// determine if we need to insert a space
		// this is determined by the first character of the code
		// if the first character matches, we're in the same number 
		// group as our previous character
		if (currentCode[0] == prevCode[0])
		{
			cout << " ";
		}
		
		// output our mapped current code
		cout << currentCode;

		// store this current code as previous
		prevCode = currentCode;
	} 
	cout << endl;
}