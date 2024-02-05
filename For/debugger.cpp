#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int n = 5;

	for (int i = 0; 
		i < n; 
		i++)
	{
		cout << i << "\t";
	}
	return 0;
}