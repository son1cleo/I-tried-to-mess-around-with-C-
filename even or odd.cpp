#include<iostream>

using namespace std;

int main()
{
	int N;

	cout << "Enter N:";
	cin >> N;

	if (N % 2 == 0)
	{
		cout << "Even";
	}

	else
	{
		cout << "Odd";
	}

	return 0;
}