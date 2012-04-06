// StoreCredit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	// input phase

	// how many cases there are?
	unsigned int caseCount = 0;
	cin >> caseCount;

	cout << "Number of cases: " << caseCount << endl;

	// now we capture input for every test case we have
	for (unsigned int c = 0; c < caseCount; ++c)
	{
		// read in the credits
		unsigned int credits = 0;
		cin >> credits;
		// read in the number of items in the store
		unsigned int itemCount = 0;
		cin >> itemCount;

		// declare price list
		vector<unsigned int> priceList;

		// for every item, read the price
		for (unsigned int p = 0; p < itemCount; ++p)
		{
			// read the price
			unsigned int price = 0;
			cin >> price;
			priceList.push_back(price);
		}

		// now that we captured the input, let's print them out
		cout << "Credits: " << credits << endl;
		cout << "Item Count: " << itemCount << endl;

		for (vector<unsigned int>::iterator it = priceList.begin(); it < priceList.end(); ++it)
		{
			unsigned int currentPrice = *it;
			cout << "\tPrice: " << currentPrice << " ";
		}
		cout << endl;


	}


	return 0;
}

