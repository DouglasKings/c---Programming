#include <iostream>
using namespace std;


int main()
{
	int Length;
	cout << "Enter the length of a square " << endl;
	cin >> Length;

	int Width;
	cout << "Enter the width of a square " << endl;
	cin >> Width;

	int Perimeter = Length + Width + Length + Width;
	cout << "Perimeter of a square is " << Perimeter << "cm" << endl;

	double Area = Length * Width;
	cout << "Area of a square is " << Area << "cmsquared" << endl;
	
	return 0;
}