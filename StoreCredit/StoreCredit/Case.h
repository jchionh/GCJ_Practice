#pragma once

#include "stdafx.h"
#include <vector>

class Case
{
public:
	// ctor
	Case(unsigned int id);
	// dtor
	~Case();

	// set the credits
	void SetCredits(unsigned int credits) { mCredits = credits; }

	// add price
	void AddItemPrice(unsigned int price) { mPriceList.push_back(price); }

	// solve the provlem
	void Solve();



private:

	// how many items we want to buy?
	static const unsigned int SOLUTION_DEPTH = 2;

	unsigned int mId;
	unsigned int mCredits;
	std::vector<unsigned int> mPriceList;
	std::vector<unsigned int> mResult;

	

	bool Search(unsigned int currentPos, unsigned int credits, std::vector<unsigned int>& solution, unsigned int depth);
};