#include<iostream>

using namespace std;

int main()

{
	int i;

	for (i = 11; i > 10; i++)
	{
		if (i == 100)
		{
			break;
		}

		cout << i << "\n";
	}

	return 0;
}