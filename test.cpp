#include <iostream>
#include <string>
#include <cstring>

int main()
{
	char letter;
	std::string x = "cool girl";
	char *y = new char[x.length()];
	char *secret = new char[x.length()];	

	std::strcpy(y, x.c_str());
	for(int i = 0; i <x.length(); i++)
	{
		if (y[i] == ' ')
		{
			secret[i] = y[i];
		}
		else
		{
		secret[i] = '*';
		}
		std::cout<<secret[i];
	}

	std::cout<<"guess a letter\n";
	std::cin>>letter;

	for(int i = 0; i <x.length(); i++)
	{
		if(y[i] == letter)
		{
			secret[i]=y[i];
		}
	}
	for(int i = 0; i <x.length(); i++)
	{	
		std::cout<<secret[i];
	}

		
	
	delete[]y;

	return(0);


}
