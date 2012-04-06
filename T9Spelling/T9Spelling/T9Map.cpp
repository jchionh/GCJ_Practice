
#include "T9Map.h"

using namespace std;

T9Map* T9Map::single = NULL;

// ctor
T9Map::T9Map()
{
	// create our mapping here
	mMap['a'] = "2";
	mMap['b'] = "22";
	mMap['c'] = "222";
	mMap['d'] = "3";
	mMap['e'] = "33";
	mMap['f'] = "333";
	mMap['g'] = "4";
	mMap['h'] = "44";
	mMap['i'] = "444";
	mMap['j'] = "5";
	mMap['k'] = "55";
	mMap['l'] = "555";
	mMap['m'] = "6";
	mMap['n'] = "66";
	mMap['o'] = "666";
	mMap['p'] = "7";
	mMap['q'] = "77";
	mMap['r'] = "777";
	mMap['s'] = "7777";
	mMap['t'] = "8";
	mMap['u'] = "88";
	mMap['v'] = "888";
	mMap['w'] = "9";
	mMap['x'] = "99";
	mMap['y'] = "999";
	mMap['z'] = "9999";
	mMap[' '] = "0";
}