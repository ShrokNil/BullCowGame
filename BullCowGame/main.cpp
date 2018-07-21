#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string Guess = "";
string GetGuessAndPrintBack();


// The entry point for our application
int main()

{
	PrintIntro();
	GetGuessAndPrintBack();
	
	



	return 0;
}

void PrintIntro()
{
	// intoduce the game
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to bulls and Cows\n\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n\n";
	cout << endl;
	return;
}

// get a guess from the player
string GetGuesAndPrintBack()
{
	
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	cout << endl;
	// Prints the guess back
	cout << "your guess was: " << Guess << endl;
	cout << endl;
	return Guess;
}
