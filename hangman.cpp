#include <iostream>
#include <string>
#include <cstring>
#include "Hangman.h"

Hangman::Hangman()
{
	secretWord = "test";
	disguisedWord;
}


void Hangman::setSecretWord(std::string initialWord)
{
	secretWord = initialWord;
}

std::string Hangman::getSecretWord()
{
	return secretWord;
}

void Hangman::setMisses(int miss);

void Hangman::setDisguisedWord(std::string initialWord)
{
	char *disguisedWord = new char[initialWord.length()];
	std::strcpy(disguisedWord, initialWord.c_str());
	for(int i = 0; i <initialWord.length(); i++)
	{
		if (disguisedWord[i] == ' ')
		{
			disguisedWord[i] = ' ';
		}
		else
		{
			disguisedWord[i] = '*';
		}
	}
	
}	
