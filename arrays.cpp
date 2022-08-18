#include<iostream>
#include<string>
using namespace std;

int main()
{
	
	int i;
	string car[5];

	car[0] = "R34";
	car[1] = "Supra";
	car[2] = "M5";
	car[3] = "Baal";
	car[4] = "Jibon";

	for (i = 0; i < 5; i++)
	{
		cout << car[i] << "\n";
	}

	return 0;
}