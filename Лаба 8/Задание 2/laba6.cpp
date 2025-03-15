#include <iostream>
#include<windows.h>
#include "FindCode.h"



int main()
{
     setlocale(LC_CTYPE, "ru");
	 SetConsoleCP(1251);
	 SetConsoleOutputCP(1251);

	 int a, n;
	 cout << "Введите количество символов:  "; cin >> n;
	 unsigned char* code = new unsigned char[n];

	 cout << "Введите символы: ";
	 for (int i = 0; i < n; i++)
	 {
		 cin >> code[i];
	 }

	 cout << "Введите действие 1(англ.буквы), 2(рус.буквы), 3(цифры)" << endl;
	 cin >> a;

	 FindCode(a, code, n);

	delete[] code;
	return 0;

}

