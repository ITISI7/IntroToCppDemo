#include <iostream>

using std::cout;
using std::endl;

void printFloat(float* arr, size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		cout << arr[i] << endl;
	}
}

void initBools(bool* arr, size_t size, bool defaultValue)
{
	for (size_t i = 0; i < size; ++i)
	{
		arr[i] = defaultValue;
	}
}
int *zeroArray(size_t size)
{
	int dynArr = new int[size];
	for (size_t i = 0; i < size; ++i)
	{
		dynArr[i] = 0;
	}

}

int main()
{
	float printArr[] = { 5.6f, 6.7f, 7.f };
	printFloat(printArr, 3);

	bool initArr[5] = {};
	initBools(initArr, 5, true);
}