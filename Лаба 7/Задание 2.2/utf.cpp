#include "utf.h"
#include <iostream>
using namespace std;

void utf(char& symbol)
{
	cout << "��������� Windows-1251 - " << (int)symbol << endl;
	cout << "��������� UTF-8 - " << (wchar_t)symbol << endl;
}