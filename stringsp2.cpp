#include<iostream>
#include<string>

using namespace std;

int main()
{
	string confess = "I just want to ";
	string confess2 = "become friends that' all.\n ";

	string truth = confess.append(confess2);

	cout << truth << truth.length() ;
	
	return 0;

}