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
	size_t priceCount = mPriceList.size();
	for (size_t i = 0; i < priceCount; ++i)
	{
		vector<unsigned int> solution;
		bool solved = Search(i, mCredits, solution, 1);
		if (solved)
		{
			for (vector<unsigned int>::reverse_iterator rit = solution.rbegin(); rit < solution.rend(); ++rit)
			{
				// for human readable position rendering
				// 1. we want to display the soltuion in asecnding position order, hence using reverse iterator
				// 2. we want first positoin to be 1 instead of 0, hencs a +1 to the position
				cout << (*rit) + 1 << " ";
			}
			cout << endl;
			return;
		}
	}
	cout << endl;
}

// recursive call to search for a solution to our problem
bool Case::Search(unsigned int currentPos, unsigned int credits, vector<unsigned int>& solution, unsigned int depth)
{
	// check the depth, if we've reached the depth threshold, there's no solution
	if (depth > SOLUTION_DEPTH)
	{
		return false;
	}

	size_t priceCount = mPriceList.size();
	if (currentPos >= priceCount)
	{
		// if we're out of the seach space, there's no solution
		// return false here
		return false;
	}

	unsigned int currentPrice = mPriceList[currentPos];
	int creditsLeft = credits - currentPrice;

	if (creditsLeft == 0)
	{
		// we need to check solution depth, we want to buy exactly SOLUTION_DEPTH items
		if (depth == SOLUTION_DEPTH)
		{
			// this is exact, there's a solution!
			// we want the solution path
			// record it
			solution.push_back(currentPos);
			return true;
		}
		else
		{
			// although we can fully use up teh credits, 
			// we retun false here as this is not exactly SOLUTION_DEPTH items
			return false;
		}
	}
	else if (creditsLeft < 0)
	{
		// if we've overblown the budget, there's no solution
		return false;
	}
	else
	{
		// search remaining search space for a solution!
		for (size_t i = currentPos+1; i < priceCount; ++i)
		{
			bool solved = Search(i, creditsLeft, solution, depth+1);
			if (solved)
			{
				// we want the solution path
				// record it
				solution.push_back(currentPos);
				return true;
			}	
		}
		// if we're here, we've got no solution
		return false;
	}
}