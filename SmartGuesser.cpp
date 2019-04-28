#include <iostream>
#include "SmartGuesser.hpp"
using namespace std;
using namespace bullpgia;

string SmartGuesser::guess() {
	string r="";
	for (uint i=0; i<this->length; ++i) {
		char c = '0' + (rand()%10);
		r += c;
	}
	return r;
}
