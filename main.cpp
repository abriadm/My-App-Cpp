#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main()
{
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