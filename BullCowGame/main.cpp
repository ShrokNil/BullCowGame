/* This is the console executable, that makes use of the BullCow class
this acts as the view in a MVC pattern and is responsible for all user interaction.
for game logic see FBullCowGame class.
*/

#include <iostream>
#include <string>
#include "Fbullcowgame.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; //Instantiate a new game

// The entry point for our application
int32 main()
{

	bool bPlayAgain = false;
	do 
	{ 
		BCGame.Reset();
		PrintIntro();
		PlayGame();
		//TODO add a game summary
		bPlayAgain = AskToPlayAgain();

	}

	while (bPlayAgain);

	return 0; // Exit the application
}


// Introduce the game
void PrintIntro()
{
	constexpr int32 WORD_LENGTH = 9;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}


void PlayGame()
{

	int32 MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;

	// Loop for the number of turns asking for guesses
	// TODO change from FOR to WHILE loop once we are validating tries
	for (int32 count = 1; count <= MaxTries; count++) {
		FText Guess = GetGuess(); //TODO make loop checking valid guesses

		//Submit valid guess to the game
		//Print number of bulls and cows
		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}
}

//TODO summarize game

FText GetGuess()
{
	int32 CurrentTry = BCGame.GetCurrentTry();

	// Get a guess from the player
	std::cout << "Enter your guess: ";
	FText Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (y/n) ";
	FText Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}