#pragma once
#include <string>

using FString = std::string;
using int32 = int;

//Initializes all values to zero
struct FBullCowCount {
	int32 Cows = 0;
	int32 Bulls = 0;
};

enum EWordStatus
{

};

class FBullCowGame {

public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const;
	FString GetHint() const;
	int32 GetTurnNumber() const;
	int32 GetCurrentTry() const;
	int32 GetHiddenWordLength() const;

	bool IsGameWon() const;
	bool CheckGuessValidity(FString) const;
	
	//counts bulls and cows, and increases try # assuming valid guess 
	FBullCowCount SubmitGuess(FString);

	void Reset(); 

private:
	// see constructor for initialization
	int32 MyCurrenTry;
	int32 MyMaxTry;
	int32 TurnNumber;

	FString MyHiddenWord;
	
};
