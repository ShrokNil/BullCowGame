#pragma once
#include <string>
//Never use a using namespace in a header file
class FBullCowGame 
{
public:
	void Reset(); // TODO make a more rich return value.
	int GetMaxTries();
	int PrintCurrentTry();
	void GetWordRandomly();
	bool CheckifIsogram( std::string);
	bool IsGameWon();


	
	
// ^^ Try to ignore this and focus on the interface above.
private: 
	int GetCurrentTries;
	int MyMaxTries;
};

