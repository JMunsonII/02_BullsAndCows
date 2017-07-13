/* Implementation file for the Bulls & Cows Game */
#pragma once

#include "FBullCowGame.h"

using int32 = int;
using FText = std::string;
using FString = std::string;

void FBullCowGame::Reset()
{
	CurrentTry = 1;
	CurrentGuess = "";
	CurrentWord = "";
	BCCount.BullCount = 0;
	BCCount.CowCount = 0;
	bDidWin = false;

	return;
}

void FBullCowGame::CreateDictionary()
{
		MyDictionary.push_back("abe");
		MyDictionary.push_back("bar");
		MyDictionary.push_back("cat");
		MyDictionary.push_back("dog");
		MyDictionary.push_back("cow");
		MyDictionary.push_back("fig");
		MyDictionary.push_back("rat");
		MyDictionary.push_back("big");
		MyDictionary.push_back("dab");
		MyDictionary.push_back("bat");
	
		MyDictionary.push_back("able");
		MyDictionary.push_back("aeon");
		MyDictionary.push_back("bear");
		MyDictionary.push_back("bare");
		MyDictionary.push_back("bone");
		MyDictionary.push_back("crud");
		MyDictionary.push_back("crap");
		MyDictionary.push_back("done");
		MyDictionary.push_back("walk");
		MyDictionary.push_back("jerk");
	
		MyDictionary.push_back("zebra");
		MyDictionary.push_back("abysm");
		MyDictionary.push_back("aches");
		MyDictionary.push_back("pains");
		MyDictionary.push_back("panes");
		MyDictionary.push_back("bears");
		MyDictionary.push_back("baste");
		MyDictionary.push_back("beryl");
		MyDictionary.push_back("ochre");
		MyDictionary.push_back("pages");
	
		MyDictionary.push_back("abject");
		MyDictionary.push_back("aborts");
		MyDictionary.push_back("corset");
		MyDictionary.push_back("corpus");
		MyDictionary.push_back("cortex");
		MyDictionary.push_back("felons");
		MyDictionary.push_back("felony");
		MyDictionary.push_back("emoted");
		MyDictionary.push_back("golfer");
		MyDictionary.push_back("zygote");
	
		MyDictionary.push_back("abolish");
		MyDictionary.push_back("abusive");
		MyDictionary.push_back("benzoyl");
		MyDictionary.push_back("bending");
		MyDictionary.push_back("chorale");
		MyDictionary.push_back("chintzy");
		MyDictionary.push_back("dilated");
		MyDictionary.push_back("diopter");
		MyDictionary.push_back("hayloft");
		MyDictionary.push_back("lamprey");
	
		MyDictionary.push_back("adjourns");
		MyDictionary.push_back("adjuncts");
		MyDictionary.push_back("boarfish");
		MyDictionary.push_back("boastful");
		MyDictionary.push_back("chunkily");
		MyDictionary.push_back("defaults");
		MyDictionary.push_back("funkiest");
		MyDictionary.push_back("hopefuls");
		MyDictionary.push_back("layering");
		MyDictionary.push_back("yolkiest");

		MyDictionary.push_back("ablutions");
		MyDictionary.push_back("backwinds");
		MyDictionary.push_back("clipboard");
		MyDictionary.push_back("doughlike");
		MyDictionary.push_back("enslaving");
		MyDictionary.push_back("filtering");
		MyDictionary.push_back("garnished");
		MyDictionary.push_back("hardcover");
		MyDictionary.push_back("impacting");
		MyDictionary.push_back("joshingly");
		
		MyDictionary.push_back("abridgment");
		MyDictionary.push_back("biographer");
		MyDictionary.push_back("compulsive");
		MyDictionary.push_back("daughterly");
		MyDictionary.push_back("eulogizers");
		MyDictionary.push_back("fountained");
		MyDictionary.push_back("harmonizes");
		MyDictionary.push_back("incubators");
		MyDictionary.push_back("mentorship");
		MyDictionary.push_back("outrivaled");
		
		MyDictionary.push_back("abolishment");
		MyDictionary.push_back("atmospheric");
		MyDictionary.push_back("backgrounds");
		MyDictionary.push_back("campgrounds");
		MyDictionary.push_back("complainers");
		MyDictionary.push_back("countryside");
		MyDictionary.push_back("dangerously");
		MyDictionary.push_back("disgraceful");
		MyDictionary.push_back("disturbance");
		MyDictionary.push_back("documentary");
		MyDictionary.push_back("facetiously");
		MyDictionary.push_back("fracedinous");
		MyDictionary.push_back("filmography");
		MyDictionary.push_back("fluoridates");
		MyDictionary.push_back("lumberjacks");
		MyDictionary.push_back("misanthropy");
		MyDictionary.push_back("nefariously");
		MyDictionary.push_back("palindromes");
		MyDictionary.push_back("personality");
		MyDictionary.push_back("playgrounds");
		MyDictionary.push_back("playwrights");
		MyDictionary.push_back("precautions");
		MyDictionary.push_back("predictably");
		MyDictionary.push_back("Republicans");
		MyDictionary.push_back("semordnilap");
		MyDictionary.push_back("speculation");
		MyDictionary.push_back("stenography");
		MyDictionary.push_back("subordinate");
		MyDictionary.push_back("Switzerland");
		MyDictionary.push_back("trampolines");
		MyDictionary.push_back("undesirably");
		MyDictionary.push_back("vouchsafing");
		MyDictionary.push_back("workmanship");
		
		MyDictionary.push_back("absorptively");
		MyDictionary.push_back("ambidextrous");
		MyDictionary.push_back("bankruptcies");
		MyDictionary.push_back("configurated");
		MyDictionary.push_back("considerably");
		MyDictionary.push_back("demographics");
		MyDictionary.push_back("demonstrably");
		MyDictionary.push_back("exclusionary");
		MyDictionary.push_back("exculpations");
		MyDictionary.push_back("exhaustingly");
		MyDictionary.push_back("flowcharting");
		MyDictionary.push_back("gunpowderish");
		MyDictionary.push_back("housewarming");
		MyDictionary.push_back("hypnotizable");
		MyDictionary.push_back("lexicography");
		MyDictionary.push_back("malnourished");
		MyDictionary.push_back("metalworking");
		MyDictionary.push_back("misconjugate");
		MyDictionary.push_back("overhaulings");
		MyDictionary.push_back("packinghouse");
		MyDictionary.push_back("questionably");
		MyDictionary.push_back("recognizably");
		MyDictionary.push_back("recognisably");
		MyDictionary.push_back("thunderclaps");
		MyDictionary.push_back("unforgivable");
		MyDictionary.push_back("unforgivably");
		MyDictionary.push_back("unprofitable");
		MyDictionary.push_back("unprofitably");
		MyDictionary.push_back("upholstering");

		MyDictionary.push_back("consumptively");
		MyDictionary.push_back("conversazione");
		MyDictionary.push_back("documentarily");
		MyDictionary.push_back("flamethrowing");
		MyDictionary.push_back("hypnotizables");
		MyDictionary.push_back("metalworkings");
		MyDictionary.push_back("misconjugated");
		MyDictionary.push_back("multibranched");
		MyDictionary.push_back("troublemaking");
		MyDictionary.push_back("subordinately");
		MyDictionary.push_back("unpredictably");
		MyDictionary.push_back("unproblematic");
		MyDictionary.push_back("unsympathized");
		
		MyDictionary.push_back("ambidextrously");
		MyDictionary.push_back("dermatoglyphic");
		MyDictionary.push_back("undiscoverably");

		MyDictionary.push_back("dermatoglyphics");
		MyDictionary.push_back("hydropneumatics");
		MyDictionary.push_back("uncopyrightable");
	
		MyDictionary.push_back("uncopyrightablesMyDictionary");

}

FBullCowGame::FBullCowGame()
{
	// initialize the randomizer engine
	// which is used for getting a word
	// from the dictionary
	srand(time(NULL));
	// Set up the dictionary of words
	CreateDictionary();
	// do the rest of our initialization,
	// which is repeated at each 
	// reiteration of the game loop.
	Reset();
}

int32 FBullCowGame::GetWordLength() const
{
	return int32(CurrentWord.length());
}

void FBullCowGame::SetMaxTries()
{
	TMap<int32, int32> WordLengthToMaxTries{ {3,5}, {4,8}, {5,10}, {6,16}, {7,20}, {8,30}, {9,40}, {10,60}, {11,70}, {12,90}, {13,120}, {14,140}, {15,160}, {16,200}, {17,250} };
	MaxTries = WordLengthToMaxTries[CurrentWord.length()];
	return;
}

void FBullCowGame::DoGame()
{
	bool DidQuit = false;

	do {
		Reset();
		SetTheWord();
		DisplayWelcome();
		DidQuit = !AskToPlay();
		if (!DidQuit) {
			// while the player has not won, quit, or exceeded the number of guesses...
			while (!CheckWin() && !CheckQuit() && !DidExceedGuesses()) {
				//std::cout << "\n\nTry: " << CurrentTry << "\n\n";
				// get a guess
				SetCurrentGuess();
				// check for quit...
				if (!CheckQuit()) {
					EGuessValidation GuessStatus = CheckGuess();
					if (GuessStatus != EGuessValidation::WINNER) {
						if (GuessStatus == EGuessValidation::OK) {
							DisplayProgress();
							CurrentTry++;
						}
						else {
							DisplayGuessError(GuessStatus);
						}
					}
				}
				else {
					// quitting
					DidQuit = ConfirmQuit();
				}
			}
		}
		if (!DidQuit) { 
			DidQuit = !AskToPlayAgain(); 
			//if (!DidQuit) { SetTheWord(); }
		}
	} while (!DidQuit);
	return;
}

FString FBullCowGame::GetAsciiArt()
{
	FText AsciiArt = "";

	// build cow art
	AsciiArt = "\n\n"; // a couple leading blank lines just to be neat...
	AsciiArt += "           __n__n__\n";
	AsciiArt += "    .------`-\\00/-'\n";
	AsciiArt += "   /  ##  ## (oo)\n";
	AsciiArt += "  / \\## __   ./\n";
	AsciiArt += " *   |//YY \\|/\n";
	AsciiArt += "     |||   |||\n\n";
	/*
	AsciiArt =  " (\\(~)/)\n";
	AsciiArt += "  )@_@(  #\n";
	AsciiArt += " ((q_p))'\n";
	AsciiArt += " /\\|U|/\\\n";
	AsciiArt += "/  `='  \\\n";
	*/

	return AsciiArt;
}

void FBullCowGame::DisplayWelcome()
{
	// AsciiArt
	std::cout << GetAsciiArt();
	// title & intro
	std::cout << "Welcome to Bulls & Cows - a super fun word game!\n\n";
	
	return;
}

bool FBullCowGame::AskToPlay()
{
	FText Response;

	// entice the player to play
	std::cout << "Now, would you like to guess the " << GetWordLength() << " letter word of which I'm thinking (Y/N)? ";
	std::getline(std::cin, Response);

return (Response[0] == 'Y') || (Response[0] == 'y');
}

void FBullCowGame::SetTheWord()
{
	FString AWord = ""; // a word from the dictionary

	// OK, grab the dictionary and get a 
	// random word from it...
	// first, get a random index value...
	int32 WordIndex = rand() % MyDictionary.size()+1;
	// next get the word
	CurrentWord = MyDictionary[WordIndex];
	//std::cout << "\n\nThe word: \"" << CurrentWord << "\"\n\n";
	// and set max tries based on word size
	SetMaxTries();

	// our dictionary has nothing but lowercase words,
	// so no need to do the following...  left here
	// for posterity
	/*std::stringstream TempString;
	
	for (auto AChar : AWord)
		TempString << (char)tolower(AChar);

	CurrentWord = TempString.str();
	*/
	
	
	return;
}

int32 FBullCowGame::GetCurrentTry() const
{
	return CurrentTry;
}

int32 FBullCowGame::GetMaxTries() const
{
	return MaxTries;
}

void FBullCowGame::SetCurrentGuess()
{
	FText PlayerGuess = "";
	int32 RemainingGuesses;
	// calculate remaining guesses
	RemainingGuesses = MaxTries - CurrentTry;
	// ask for the player's guess
	std::cout << "Your guess (you have " << RemainingGuesses << " left after this one): ";
	// capture the player's guess
	std::getline(std::cin, PlayerGuess);

	// convert the guess to lowercase
	std::stringstream TempString;
	for (auto AChar : PlayerGuess)
		TempString << (char)tolower(AChar);
	
	// set the guess...
	CurrentGuess = TempString.str();
	
	return;
}

EGuessValidation FBullCowGame::CheckGuess()
{
	EGuessValidation GuessStatus = EGuessValidation::OK;

	if (CurrentGuess != CurrentWord) {
		if (CurrentGuess.length() > CurrentWord.length()) {
			GuessStatus = EGuessValidation::TOO_LONG;
		}
		else if (CurrentGuess.length() < CurrentWord.length()) {
			GuessStatus = EGuessValidation::TOO_SHORT;
		}
		/*else if (CheckGuessForNumbers()) {
			GuessStatus = EGuessValidation::HAS_NUMBERS;
		}*/
		else if (CheckGuessForNonCharacters()) {
			GuessStatus = EGuessValidation::HAS_SPECIAL_CHARACTERS;
		}
		else if (!CheckIsIsogram(CurrentGuess)) {
			GuessStatus = EGuessValidation::NOT_ISOGRAM;
		}
		else
			FindBullsAndCows();
	}
	else {
		GuessStatus = EGuessValidation::WINNER;
		bDidWin = true;
	}

	return GuessStatus;
}

/*bool FBullCowGame::CheckGuessForNumbers()
{
	bool NumberFound = false;
	// check the guess for any numbers
	for (int32 i = 0; i <= 9; i++) {
		FString CounterString = std::to_string(i);
		if (CurrentGuess.find(CounterString) != FString::npos) {
			NumberFound = true;
			break;
		}
	}
	return NumberFound;
}*/

bool FBullCowGame::CheckGuessForNonCharacters()
{
	bool bHasNonChars = false;
	
	for (int32 i = 0; i < (int32)CurrentGuess.length(); i++) {
		int32 CharCode = CurrentGuess[i];
		if (!(CharCode >= 65 && CharCode <= 90) && !(CharCode >= 97 && CharCode <= 122)) {
			bHasNonChars = true;
			break;
		}
	}
	return bHasNonChars;
}

bool FBullCowGame::CheckIsIsogram(FString AWord)
{
	bool bIsIsogram = true;
		
	/* original code... 
	for (int32 i = 0; i < (int32)CurrentGuess.length(); i++) {
		int32 CharCount = std::count(CurrentGuess.begin(), CurrentGuess.end(), CurrentGuess[i]);
		if (CharCount > 1) {
			IsIsogram = true;
			break;
		}
	}*/

	// we need a map to hold the characters
	// already seen...
	TMap<char, bool> TheLetter;

	// if we don't have single-value or null characters...
	if (AWord.length() > 1 && AWord != "\0") {
		// loop through the word...
		for (auto AChar : AWord) {
			// for each character in word...
			if (TheLetter[AChar]) {
				// whoops, duplicate letter!
				bIsIsogram = false;
				break;
			}
			else
				TheLetter[AChar] = true;
		}
	}

	return bIsIsogram;
}

void FBullCowGame::DisplayGuessError(EGuessValidation GuessStatus)
{
	std::stringstream ErrorMessage;
	switch (GuessStatus) {
	case EGuessValidation::TOO_LONG:
		ErrorMessage << "Oops!  Your guess is too long.  Please enter a " << CurrentWord.length() << " letter word.  Try again!\n";
		break;
	case EGuessValidation::TOO_SHORT:
		ErrorMessage << "Oops!  Your guess is too short.  Please enter a " << CurrentWord.length() << " letter word.    Try again!\n";
		break;
	case EGuessValidation::NOT_ISOGRAM:
		ErrorMessage << "Oops!  Your guess is not an isogram.  Try again!\n";
		break;
	case EGuessValidation::HAS_NUMBERS:
		ErrorMessage << "Oops!  Your guess contains numbers - we're shooting for words here.  Try again!\n";
		break;
	case EGuessValidation::HAS_SPECIAL_CHARACTERS:
		ErrorMessage << "Oops!  Your guess contains something other than letters - we're shooting for words here.  Try again!\n";
		break;
	}

	std::cout << ErrorMessage.str();
	return;
}

bool FBullCowGame::DidExceedGuesses()
{
	bExceededGuesses = (CurrentTry >= MaxTries);
	return bExceededGuesses;
}

void FBullCowGame::FindBullsAndCows()
{
	// reset the bulls/cows counts
	// as we are re-comparing the words...
	BCCount.BullCount = 0;
	BCCount.CowCount = 0;

	for (int32 i = 0; i < int32(CurrentGuess.length()); i++)
	{
		std::size_t Position = FString::npos;
		Position = CurrentWord.find(CurrentGuess[i]);
		//std::cout << "Char: " << CurrentGuess[i] << ", Position: " << Position << ", " << i << "\n";
		if (Position == i)
			BCCount.BullCount++;
		else
			if (Position != FString::npos)
				BCCount.CowCount++;
	}
	return;
}

bool FBullCowGame::CheckWin()
{
	// simply returns whether the current guess
	// matches the current word
	// a match, a win has occurred
	bDidWin = (CurrentGuess == CurrentWord);
	return bDidWin;
}

bool FBullCowGame::AskToPlayAgain()
{
	FText Response = "";

	if (bExceededGuesses)
		std::cout << "You have exceeded the number of guesses allowed.\n";
	if (bDidWin)
		std::cout << "***You guessed the word - you won!  Great job!***\n";

	std::cout << "Would you like to play again (Y/N)?: ";
	std::getline(std::cin,Response);
	
	return ((Response[0] == 'Y') || (Response[0] == 'y'));
}

bool FBullCowGame::CheckQuit()
{
	bool DidQuit = false;

	if (CurrentGuess.length() == 1 && ((CurrentGuess[0] == 'Q') || (CurrentGuess[0] == 'q')))
		DidQuit = true;
	
	return DidQuit;
}

bool FBullCowGame::ConfirmQuit()
{
	FText Response = "";

	// confirm quit
	std::cout << "Are you sure you wish to quit? (Enter Y to quit): ";
	std::getline(std::cin, Response);
	
	return ((Response[0]=='Y') || (Response[0]=='y'));
}

void FBullCowGame::DisplayProgress()
{
	// output player progress display here
	std::cout << "\n\nYou have " << BCCount.BullCount << " Bulls and " << BCCount.CowCount << " Cows right now. (Q = quit)\n";
	//std::cout << "Your next guess please: " << this->CurrentGuess << "\n\n";
	return;
}
