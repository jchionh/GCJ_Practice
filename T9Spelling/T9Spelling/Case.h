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
	void SetSentence(std::string& sentence) { mSentence = sentence; }

	// solve the provlem
	void Solve();

private:
	unsigned int mId;
	std::string mSentence;
};