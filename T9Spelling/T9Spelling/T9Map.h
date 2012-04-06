#pragma once

#include "stdafx.h"
#include <map>
#include <string>

class T9Map
{
public:
	// singleton instance
	static T9Map* Instance() { if (single == NULL) { single = new T9Map(); } return single; }
	std::string& Map(char c) { return mMap[c]; };

private:
	std::map<char, std::string> mMap;
	static T9Map *single;

	// private ctor
	T9Map();
};