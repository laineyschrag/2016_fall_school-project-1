#include <iostream>
#ifndef HANGMAN_H
#define HANGMAN_H

class Hangman
{

private:
std::string secretWord;
char* disguisedWord;

public:
Hangman();
void setSecretWord(std::string initialWord);
std::string getSecretWord();
void setDisguisedWord(std::string initialWord);
std::string getDisguisedWord();
void run(std::string initialWord);


};
#endif

