// ReverseWords.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Case.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	// input phase
	// how many cases there are?

	// use consistent getline to get the input
	string caseCountString;
	getline(cin, caseCountString);

	// now, convert the input string to a unsigned int
	unsigned int caseCount = 0;
	istringstream buffer(caseCountString);
	buffer >> caseCount;

	// now we capture input for every test case we have
	for (unsigned int c = 0; c < caseCount; ++c)
	{
		// instance a new case
		Case currentCase(c+1);

		// read our sentence
		string sentence;
		getline(cin, sentence);

		// create a input string stream
		// to tokenize and read word by word
		istringstream words(sentence);
		while(words)
		{
			// read in a word
			string word;
			words >> word;
			// add the word to the case
			currentCase.AddWord(word);
		}
		
		// solve our problem
		currentCase.Solve();
	}
	return 0;
}

