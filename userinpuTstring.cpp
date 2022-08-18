#include<iostream>
#include<string>

using namespace std;

int main()
{
	string fullname;

	cout << "Type your damn name:";

	getline(cin, fullname);
	

	cout << "Your Name is: " << fullname;

	return 0;
}