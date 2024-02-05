#include <iostream>

using namespace std;

int main()
{
	int number;
	int reverse = 0;
	cout << "Enter number: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}

	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;

	if (reverse == number)
		cout << "Palidnrom" << endl;
	else
		cout << "Not palindrom" << endl;

	return 0;
}