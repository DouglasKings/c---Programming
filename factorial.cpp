#include <iostream>
using namespace std;

int main()
{
	int Number, Factorial = 1;

	cout << "Enter the integer number: " << endl;
	cin >> Number;

	if (Number < 0)
	{
		cout << "Can't find factorial for negative number." << endl;
	}
	else if (Number <= 1)
	{
		cout << Number << "! = " << Factorial << endl;
	}
	else
	{
		for (int Counter = Number; Counter >= 2; Counter++)
		{
			Factorial = Factorial * Number;
		}
		cout << Number << "! = " << Factorial << endl;
	}

	return 0;
}
