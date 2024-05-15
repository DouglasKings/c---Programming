#include "iostream"
using namespace std;

int main()
{
	int Number;
	cout << "Enter the number: ";
	cin >> Number;

	if (Number % 2 == 0)
		cout << Number << " is Even Number." << endl;
	else
		cout << Number << " is Odd Number." << endl;

	return 0;
}