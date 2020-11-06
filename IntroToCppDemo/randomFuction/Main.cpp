#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(nullptr));

	int maxRand = 0;
	cout << "Max Number " << endl;
	cin >> maxRand;
	int number = rand() % maxRand + 1;
	cout <<number;
	return 0; 
}

