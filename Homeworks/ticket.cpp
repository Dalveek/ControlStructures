#include <iostream>

using namespace std;

int func()
{
	setlocale(LC_ALL, "");
	int number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	cout << "������� ����� ����������� ������: "; cin >> number;

	while (number > 1000)
	{
		sum1 += number % 10;
		number /= 10;
	}

	while (number > 0)
	{
		sum2 += number % 10;
		number /= 10;
	}
	if (sum1 == sum2)
		cout << "We are happy" << endl;
	else
		cout << "Maybe in the next time" << endl;


	return 0;
}