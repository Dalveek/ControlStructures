#include <iostream>
#include <cmath>

//#define TASK1
//#define TASK2
//#define TASK3

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

#ifdef TASK1
	int number, factorial = 1;
	int i = 1;

	cout << "¬ведите число: "; cin >> number;
	
	while (i <= number)
	{
		factorial = factorial * i;
		i++;
	}

	cout << "‘акториал числа " << number << " равен " << factorial << endl;
#endif // TASK1

#ifdef TASK2
	int number, exponent;
	int result;

	cout << "¬ведите число: "; cin >> number;
	cout << "¬ведите степень "; cin >> exponent;

	result = pow(number, exponent);

	cout << result;
#endif // TASK2

#ifdef TASK3
	int i, counter = 0;

	for (i = 0; i < 256; i++, counter++)
	{
		cout << (char)i << " ";

		if (counter == 16)
		{
			cout << endl;
			counter = 0;
		}
	}
#endif // TASK3

	return 0;
}