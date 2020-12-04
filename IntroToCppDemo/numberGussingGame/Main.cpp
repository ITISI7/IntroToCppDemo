#include <iostream>

bool correct = false;
int tries = 0;
int minvalue = 0;
int maxValue = 100;
char choice = '_';

using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout << "think of a number between 0 and 100" << endl;
	while (!correct)
	{
		int mid = (minvalue + maxValue) / 2;

		cout << "is your answer " << mid << endl;
		cin >> choice;
		if (choice == 'y')
		{
			cout << "it took " << tries << " tries to guess the number" << endl;
			correct = true;
		}
		else if (choice == 'n')
		{
			if (minvalue == mid || maxValue == mid)
			{
				cout << "you change the answer" << endl;
				correct = true;
			}
			else
			{
				cout << "is you number higher?" << endl;
				cin >> choice;
				if (choice == 'y')
				{
					minvalue = mid;
					tries += 1;
				}
				else if (choice == 'n')
				{
					maxValue = mid;
					tries += 1;
				}
				else
				{
					cout << "error" << endl;
				}
			}

		}
		else
		{
			cout << "error" << endl;
		}
	}
}
