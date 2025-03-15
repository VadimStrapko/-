
#include <iostream>
#include <bitset>
#include "utf.h"

using namespace std;

int main() 
{
	setlocale(LC_CTYPE, "ru");

	char symbol;

	cout << " Введите символ: " << endl;
	cin >> symbol;

	utf(symbol);

	return 0;
}


