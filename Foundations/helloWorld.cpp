// my first program in c++
#include <iostream>
#include <string>

using namespace std;

string helloWorld()
{
	return "Hello World! \r\n";
}

int main() 
{
	int choice;

	cout << "Hello World! This is my first C++ thing. \r\n" << endl;


	do {
		cout << "What would you like to do? \n";
		cout << "1. Hello World \n";
		cout << "2. Variable Use \n";
		cout << "Press 0 to exit.\n";
		cin >> choice;
		switch (choice)
		{
		case 0: 
			break;
		case 1:
			cout << helloWorld() << endl;
			break;

		}

	} while (choice != 0);

	return 0;

}


