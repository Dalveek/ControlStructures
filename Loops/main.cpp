#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char key;
	do
	{
		key = _getch();
		// Функция _getch() ожидает нажатие клавиши и возвращает ASCII код нажатой клавиши
		// Функция _getch() объявлена в библиотеке <conio.h>
		cout << int(key) << "\t" << key << endl;
		// int(key) - это явное преобразование переменной 'key' в тип данных int
		// для того чтобы увидеть ASCII код символа, харнящегося в переменной key
	} while (key != 27);

	return 0;
}