#include<iostream>

using namespace std;

int main()
{
	int x, y, z;

	cout << "Enter N1: ";
	cin >> x;

	cout << "Enter N2: ";
	cin >> y;

	cout << "Enter N3: ";
	cin >> z;

	if (x > y)
	{
		cout << "N1 is maximum";
	}
	else if (y > z)
	{
		cout << "N2 is maximum";
	}
	else
	{
		cout << "N3 is maximum";
	}

	return 0;

}