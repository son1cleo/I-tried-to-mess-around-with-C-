#include<iostream>

using namespace std;

int main()
{
	int year;

	cout << "Enter a Year:";
	cin >> year;

	if (year % 4 == 0)
	{
		cout << "Leap year";
	}
	
	else if (year % 100 == 0)
	{
		cout << "Not a leap year";
	}

	else
	{
		cout << "Not a leap year";
	}

	return 0;
}