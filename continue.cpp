#include<iostream> 

using namespace std;

int main()

{
	int m;

	for (m = 0; m < 100; m++)
	{
		if (m == 10)
		{
			continue;
		}

		cout << m << "\n";
	}

	return 0;
}