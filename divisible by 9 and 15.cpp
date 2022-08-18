#include<iostream>

using namespace std;

int main()
{
	int N;

	cout << "Enter N: ";
	cin >> N;

	if (N % 9 == 0 && N % 15 == 0)
	{
		cout << "Divisible by both 9 and 15";
	}
	
	else
	{
		cout << "Not divisible by both 9 and 15";
	}

	return 0;
}