#pragma once

#include "stdafx.h"
#include <vector>
#include <string>

class Case
{
public:
	// ctor
	Case(unsigned int id);
	// dtor
	~Case();

	// add words
	void AddWord(std::string& word) { mWords.push_back(word); }

	// solve the provlem
	void Solve();

private:
	unsigned int mId;
	std::vector<std::string> mWords;
};