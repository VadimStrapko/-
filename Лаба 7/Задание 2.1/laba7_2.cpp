#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	int size = 0, sum = 0;

	cout << "Введите количество членов последовательности" << endl;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 41 - 20;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  " << i + 1 << " й член последовательности" << endl;
		if (arr[i] % 2 == 0)
		{
			sum += arr[i];
		}
	}

	cout << "Сумма четных элементов массива - " << sum << endl;
	
	delete[] arr;
}