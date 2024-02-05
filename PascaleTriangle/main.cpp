#include <iostream>

#define WIDTH 8

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int height;
	
	cout << "Введите высоту треугольника: "; cin >> height;
	height--;
	int factorial = 1;
	for (int i = 0; i < height; i++)
	{
		cout.width(WIDTH / 2);
		cout << "";
	}
	cout << left;
	cout << 1 << endl;
	for (int i = 1; i <= height; i++)
	{
		factorial *= i;

		for (int n = 0; i < height - n; n++)
		{
			cout.width(WIDTH / 2);
			cout << "";
		}

		int factorial2 = 1;
		cout.width(WIDTH);
		cout << 1;
		
		for (int j = 1; j <= i; j++)
		{
			factorial2 *= j;
			int factorial3 = 1;

			for (int k = 1; k <= i - j; k++)
			{
				factorial3 *= k;
			}
			cout.width(WIDTH); // задаем ширину вывода, а именно, сколько знакопозиций будет занимать вводимое значение
			// cout.width() воздействует только на 1 выводимое значение, для следующего выводимого значения нужно отображать ширину
			cout << factorial / factorial2 / factorial3;
		}
		cout << endl;
	}

	return 0;
}