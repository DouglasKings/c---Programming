#include <iostream>
using namespace std;

double addition(double FirstNumber, double SecondNumber)
{
	double Sum = FirstNumber + SecondNumber;
	return Sum;
}

double subtraction(double FirstNumber, double SecondNumber)
{
	double Difference = FirstNumber - SecondNumber;
	return Difference;
}

int multiplication(double FirstNumber, double SecondNumber)
{
	int Product = FirstNumber * SecondNumber;
	return Product;
}

double division(double FirstNumber, double SecondNumber)
{
	double Division = FirstNumber / SecondNumber;
	return Division;
}

int modulas(int FirstNumber, int SecondNumber)
{
	double Mod = FirstNumber % SecondNumber;
	return Mod;
}

int _tmain()
{
	int FirstNumber, SecondNumber;
	char Operator = ('+', '-', '*', '/', '%');

	cout << "Enter the first number: " << endl;
	cin >> FirstNumber;
	cout << "Enter the second number: " << endl;
	cin >> SecondNumber;
	cout << "Enter the operator: " << endl;
	cin >> Operator;

	switch (Operator)
	{
	case '+':
		double Sum;
		Sum = addition(FirstNumber, SecondNumber);
		cout << "Sum is " << Sum << endl;
		break;
	case '-':
		double Difference;
		Difference = subtraction(FirstNumber, SecondNumber);
		cout << "Difference is " << Difference << endl;
		break;
	case '*':
		int Product;
		Product = multiplication(FirstNumber, SecondNumber);
		cout << "Product is " << Product << endl;
		break;
	case '/':
		double Division;
		Division = division(FirstNumber, SecondNumber);
		cout << "Division is " << Division << endl;
		break;
	case '%':
		int Mod;
		Mod = modulas(FirstNumber, SecondNumber);
		cout << "Mod is " << Mod << endl;
		break;
	default:
		cout << "Invalid Number. " << endl;

	}
	
	return 0;
}

