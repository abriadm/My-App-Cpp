#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

void play_game()
{
	int random = rand() % 11;
	int guess;

	cout << "\n###-> Welcome to Guessing Game <-###\n" << endl;

	while (true)
	{
		cout << "Guess a number range 1-10: ";
		cin >> guess;

		if (guess == random)
		{
			cout << "You Win!!!" << endl;
			break;
		}
		else if(guess < random)
		{
			cout << "Too low!!!!" << endl;
		}
		else
		{
			cout << "Too high!!!" << endl;
		}
	}
}

int main()
{
	srand(time(NULL));
	char choice;
	do
	{
		cout << "-----Welcome!!!-----\n" << endl;
		cout << "A. Play" << endl;
		cout << "B. Quit" << endl;
		cout << "\nPlease Choice: ";
		cin >> choice;

		switch (toupper(choice))
		{
		case 'A':
			cout << "\nLet's play\n" << endl;
			play_game();
			break;
		case 'B':
			cout << "\nSee you next time!!!" << endl;
			break;
		default:
			cout << "Invalid choice!!!" << endl;
			break;
		}
	} while (toupper(choice) != 'B');

	return 0;
}