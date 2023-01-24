#include<iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;

	int arr[n];
	int minRand, maxRand;
	do
	{
		cout << "¬ведите минимальное случайное число: "; cin >> minRand;
		cout << "¬ведите максимальное случайное число: "; cin >> maxRand;
		if (maxRand <= minRand)cout << "Error: Incorrect values" << endl;
	} while (maxRand <= minRand);

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}