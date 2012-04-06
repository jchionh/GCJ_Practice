// StoreCredit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include "Case.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	// input phase
	// how many cases there are?
	unsigned int caseCount = 0;
	cin >> caseCount;

	// now we capture input for every test case we have
	for (unsigned int c = 0; c < caseCount; ++c)
	{
		// instance a new case
		Case currentCase(c+1);

		// read in the credits
		unsigned int credits = 0;
		cin >> credits;

		// set the case credits
		currentCase.SetCredits(credits);

		// read in the number of items in the store
		unsigned int itemCount = 0;
		cin >> itemCount;

		// for every item, read the price
		for (unsigned int p = 0; p < itemCount; ++p)
		{
			// read the price
			unsigned int price = 0;
			cin >> price;
			currentCase.AddItemPrice(price);
		}

		// now we have all the inputs we need for the case
		// we can solve it
		currentCase.Solve();
	}
	return 0;
}

