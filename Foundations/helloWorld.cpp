// my first program in c++
#include <iostream>
#include <string>
#include <WinSock2.h>

int main() 
{
	int choice;

	std::cout << "Hello World! This is my first C++ thing." << std::endl;
	std::cout << "What would you like to do? \n";
	std::cout << "1. Hello World \n";
	std::cout << "2. Variable Use \n";
	std::cout << "3. not yet \n";
	std::cin >> choice;

	std::cout << "You chose " << choice << std::endl;

	system("pause");

	return 0;
}