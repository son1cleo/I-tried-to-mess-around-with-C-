#include<iostream>

using namespace std;

int main()
{
	int x, y;
	
	cout << "Enter the first number: ";
	cin >> x;

	cout << "Enter the second number: ";
	cin >> y;

	if (x > y)
	{
		cout << "N1 is maximum";
	}
	else
	{
		cout << "N2 is maximum";
	}

	return 0;
}