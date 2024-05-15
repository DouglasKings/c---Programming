#include <iostream>
using namespace std;


int main()
{
	int Length;
	cout << "Enter the length of a rectangle " << endl;
	cin >> Length;

	int Breadth;
	cout << "Enter the length of a rectangle " << endl;
	cin >> Breadth;
	
	double  Rectangle = (double) int (Length * Breadth);
	cout << "The rectangle is " << " " << Rectangle  <<"cmsquared" << endl;

	return 0;
}
