#include <iostream>
using namespace std;

int main()
{
	int Number = 0;
	cout << "Enter the Number: ";
	cin >> Number;

	if (Number > 0)
	{
		cout << "The number is POSITIVE. " << endl;
	}
	else if (Number < 0)
	{
		cout << "The number is NEGATIVE. " << endl;
	}
	else
	{
		cout << "The number is ZERO. " << endl;
	}
	return 0;
}
