#pragma once
#include <string>

using FString = std::string;
using FText = std::string;
using int32 = int;
//Never use a using namespace in a header file

// All values initialized to zero
struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame 
{
public:
	FBullCowGame(); // Contstructor
	

	void Reset(); // TODO make a more rich return value.
	int32 GetMaxTries() const ;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	void GetWordRandomly();
	bool CheckGuessValidity(FText);
	// Counts bulls & cows, and increasing turn number assuming valid guess.
	FBullCowCount SubmitGuess(FString);

// ^^ Try to ignore this and focus on the interface above.
private: 
	// See constructor for initialization
	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;
		

};

