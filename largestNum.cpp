#include <iostream>
using namespace std;


int main()
{
	int Number1, Number2, Number3, Greatest;
	cout << "Enter Number 1: " << endl;
	cin >> Number1;
	cout << "Enter Number 2: " << endl;
	cin >> Number2;
	cout << "Enter Number 3: " << endl;
	cin >> Number3;

	Greatest = (Number1 > Number2 && Number1 > Number3) ? (Number1) : ((Number2 > Number3) ? (Number2) : (Number3));

	cout << Greatest << " is the greatest number." << endl;	

	return 0;
}
