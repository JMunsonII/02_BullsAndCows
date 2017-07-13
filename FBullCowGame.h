/* The Bulls & Cows Game 
*  This is the definition (header) file for the game
*  This game is based on the original Mastermind game
*  This game is built with the intent that it could be 
*  plugged in any piece of code, just by including the header & cpp files, 
*  along with two lines of implementation:
*       FBullCowGame FBCG;
*       FBCG.DoGame();
*  Written by Jon C. Munson II, 2017, as part of the "The Unreal Engine Developer Course"
*  No Bulls or Cows were harmed in the making of this game
*/
#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <vector>
#include <time.h>

// an alias for Unreal friendliness
#define TMap std::map
// more Unreal friendliness
using int32 = int;
using FText = std::string;
using FString = std::string;

struct BullCowCount 
{
	int32 BullCount = 0;
	int32 CowCount = 0;
};

enum class EGuessValidation
{
	OK,
	WINNER,
	TOO_SHORT,
	TOO_LONG,
	NOT_ISOGRAM,
	HAS_NUMBERS,
	HAS_SPECIAL_CHARACTERS
};

class FBullCowGame {
public:
	FBullCowGame(); // constructor
	void DoGame();

private:
	std::vector<FString> MyDictionary; // holds the words for the game
	int32 CurrentTry;
	int32 MaxTries;
	FString CurrentWord;
	FString CurrentGuess;
	bool bDidWin;
	bool bExceededGuesses;
	BullCowCount BCCount;

	void Reset(); // TODO make a more rich return value
	void CreateDictionary();
	FString GetAsciiArt();
	void DisplayWelcome();
	bool AskToPlay();
	void SetTheWord();
	int32 GetWordLength() const;
	void SetMaxTries();
	int32 GetCurrentTry() const;
	int32 GetMaxTries() const;
	void SetCurrentGuess();
	EGuessValidation CheckGuess(); // How is the player doing? Bulls/Cows/Win/Quit...
	//bool CheckGuessForNumbers();
	bool CheckGuessForNonCharacters();
	bool CheckIsIsogram(FString AWord);
	void DisplayGuessError(EGuessValidation GuessStatus);
	bool DidExceedGuesses();
	void FindBullsAndCows();
	bool CheckWin(); // compare bulls to word length, if equal, a win
	bool AskToPlayAgain();
	bool CheckQuit(); // PlayerGuess could be "Q" to quit
	bool ConfirmQuit();
	void DisplayProgress(); // outputs bulls/cows, etc., to screen


};