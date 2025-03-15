#include "utf.h"
#include <iostream>
using namespace std;

void utf(char& symbol)
{
	cout << "Кодировка Windows-1251 - " << (int)symbol << endl;
	cout << "Кодировка UTF-8 - " << (wchar_t)symbol << endl;
}