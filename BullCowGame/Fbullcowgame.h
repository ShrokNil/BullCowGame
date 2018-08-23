#pragma once
#include <string>
//Never use a using namespace in a header file
class FBullCowGame 
{
public:
	FBullCowGame(); // contstructor
	

	void Reset(); // TODO make a more rich return value.
	int GetMaxTries() const ;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void GetWordRandomly();
	bool CheckGuessValidity( FText);
	// provide a method for counting bulls & cows, and increasing turn number.
	

// ^^ Try to ignore this and focus on the interface above.
private: 
	// see constructor for initialization
	int MyCurrentTry;
	int MyMaxTries;
		

};

