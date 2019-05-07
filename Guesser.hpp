
#include <iostream>
#include "calculate.hpp"
#pragma once

namespace bullpgia{

class Guesser {
public:
	uint length = 0;

	virtual std::string guess()=0;
	virtual void startNewGame(uint length){}
	virtual void learn(std::string reply){}
};
}
