#include <iostream>
#include "calculate.hpp"
#include <vector>



using namespace std;


string calculateBullAndPgia(string choice, string guess){
	string ans = "";
	int bulls = 0;
	int pgia = 0;
	string newGuess = "";
	string newChoice = "";
	if (choice.length() < guess.length()){
		for (int i=0 ; i<choice.length() ; i++){
			if (guess[i] == choice[i]){
				bulls++;
			}else {
				newGuess += guess[i];
				newChoice += choice[i];
			}
		}
	}
	else{
		for (int i=0 ; i<guess.length() ; i++){
			if (guess[i] == choice[i]){
				bulls++;
			}else {
				newGuess += guess[i];
				newChoice += choice[i];
			}
		}
	}

	for (int i=0 ; i<newGuess.length() ; i++){
		for (int j=0 ; j<newChoice.length() ; j++){
			if (newGuess[i] == newChoice[j]){
				pgia++;
				newChoice.replace(j, 1, "A");
			}
		}
	}

	ans = to_string(bulls) + "," + to_string(pgia);
	return ans;

}



