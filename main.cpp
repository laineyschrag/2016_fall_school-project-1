#include <iostream>
#include <string>
#include "Hangman.h"

void run(Hangman&myHangman)
{	char c;
	int miss;
	std::cout<<"Guess this: "<<myHangman.getDisguisedWord();
	myHangman.setMisses(miss);
	std::cout<<"\nGuesses so far: "<<myHangman.getMisses();
	std::cout<<"\nEnter your guess character: ";
	std::cin>>c;

}
int main()
{
std::string initialWord;

Hangman myHangman;

std::cout<<"input a word.";
std::cin>>initialWord;

std::cout<<"\nWelcome to the Hangman Game!";
std::cout<<"\n-------------------------\n";
myHangman.setSecretWord(initialWord);
run(myHangman);

return(0);
}
