#include "Fbullcowgame.h"

using int32 = int;

FBullCowGame::FBullCowGame() // Constructor
{
	Reset();

}

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

bool FBullCowGame::IsGameWon() const  {	return false;}




void FBullCowGame::Reset() // Contents of FBullCowGame constructor
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	const FString HIDDEN_WORD = "planet";
	MyHiddenWord = HIDDEN_WORD;
	
	MyCurrentTry = 1;

	return;
}

void FBullCowGame::GetWordRandomly()
{
	
	return;
}

bool FBullCowGame::CheckGuessValidity(FText)
{

	return false;
}

FBullCowCount FBullCowGame::SubmitGuess(FString)
{
	//increment the turn number
	MyCurrentTry++;
	//setup a return variable
	FBullCowCount BullCowCount;
	//loop through all letters in the guess
	//compare all letters against the hiddle word

	return BullCowCount;
}





