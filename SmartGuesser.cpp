#include <iostream>
#include <string>
#include "SmartGuesser.hpp"
using namespace std;
using namespace bullpgia;


int wrong = 0;
int pos = 0;
int candidate = 0;
string ans = "";

void SmartGuesser::learn(string reply){
	this->reply = reply;
}

string SmartGuesser::guess() {
	int bulls = (int)(this->reply[0]);
	if (bulls - 48 == (pos+1)){
		pos++;
		candidate = 0;
	}
	ans.replace(pos,1,to_string(candidate));
	candidate++;
	return ans;
}

void SmartGuesser::startNewGame(uint length){

	this->length = length;
	wrong = 0;
	pos = 0;
	candidate = 0;
	ans = "wrong"; // wrong answer for sure.
	ans = ans.substr(0,length);
}
//}



