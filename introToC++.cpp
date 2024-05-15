#include "iostream"
#include"iomanip"
#include"conio.h"
using namespace std;

int main()
{
	// CLEAR SCREEN MANIPULATOR
	clrscr();

	// IMPLICIT CONVERSION is storing versions of low data type into higher data type. It involves the compiler doing the conversion.
	int X = 6;
	double Y = X;
	cout << "The value of X is " << X << "and Y is " << Y << endl;


	// EXPLICIT CONVERSION is storing versions of high data type to low data type. It involves a programmer doing the conversion.
	int A = 9;
	int B = 2;
	float C = (float)A / B;
	cout << "The quotient of A and B is " << C << endl;

	float D = 5.5;
	int E = (int)D;
	cout << "The value of E is " << E << endl;

	double F = 80.0;
	float G = (float)F;
	cout << "The value of G is " << G << endl;


	// INPUT AND OUTPUT OPERATORS
	string Name;
	int Age;
	cout << "Enter your Name and Age : ";
	cin >> "Name" >> Age; // CASCADING OF INPUT OPERATORS
	cout << "I am called " << "Name" << "and my Age is " << Age << endl;

	string Colour = "Red";
	int A = 10;
	int B = 5;
	cout << A << B << "Colour" << endl; // CASCADING OF OUTPUT OPERATORS

	cout << setw(16) << "C++ Class"; // CLEAR SCREEN MANIPULATOR


	// FINDING THE SUM OF ODD NUMBERS.
	// WHILE LOOP is a pre tested loop structure and checks the condition at the beginning of the structure.
	// IF statement is a selection statement that allows more than one possible flow of control.
	int Num = 100;
	int Sum = 0;
	while (Num >= 0){
		if (Num % 2 == 1){
			Sum += Num;
		}
		Num--;
	} 
	cout << "The sum of odd Numbers between 100 and 0 is " << Sum << endl;


	// DISPLAYING ODD NUMBERS DEPENDING ON USER INPUT.
	int Num;
		cout << "Enter the number: ";
		cin >> Num;
		cout << "Odd numbers up to " << Num << " are: ";
	for (int i = 1; i <= Num; i += 2) {
		cout << i << " " << endl;
	}


	// AVERAGE OF NUMBERS FROM 1000 TO 2500
	// DO WHILE LOOP is a post tested loop structure and checks the condition at the end of the structure.
	int X = 1000;
	double Sum = 0, Count = 0;
	do{
		if (X%2 == 0){
			Sum += X;
			Count++;
		} X++;
	} while (X <= 2500);
	double Avg = Sum / Count;
	cout << "The Average of numbers from 1000 and 2500 is " << Avg;


	// AVERAGE OF NUMBERS FROM 0 TO 1000
	int sum = 0;
	int count = 0;
	// Calculate the sum of numbers from 0 to 1000
	for (int i = 0; i <= 1000; ++i) {
		sum += i;
		count++;  }
	// Calculate the average
	// static_cast takes the value from an expression as input, and returns that value converted into the type specified by new_type(e.g. int, bool, char, double).
	double average = static_cast<double>(sum) / count;
	// Display the result
		cout << "Average of numbers from 0 to 1000: " << average << endl;


	// Assignment operators are used to assign values to variables.
		int X = 10;
		X += 1; // X = X + 1
		cout << X << endl;

	// Relational Operators or comparison operators are used to compare two values. These return value of a comparison is either true (1) or false (0).
		int A = 10;
		int B = 5;
		bool result = A < B;
		bool result1 = A <= B;
		bool result2 = A > B;
		bool result3 = A >= B;
		bool result4 = A == B;
		bool result5 = A != B;
		cout << "A < B is " << result << endl;
		cout << "A <= B is " << result1 << endl;
		cout << "A > B is " << result2 << endl;
		cout << "A >= B is " << result3 << endl;
		cout << "A == B is " << result4 << endl;
		cout << "A != B is " << result5 << endl;


		double H = 100;
		double I = 150;
		int J = 50;
		int K = 25;

		bool Res1 = (H < I) && (J < K);
		bool Res2 = (H > I) && (J > K);
		bool Res3 = (H < I) || (J > K);
		bool Res4 = (H > I) && (J > K);

		//USER INPUT EVEN OR ODD NUMBER GREATER THAN 10.
		// NESTED IF ELSE STATEMENT
		int A;
		cout << "Enter the value of A: ";
		cin >> A;

		if (A > 10){
			if (A % 2 == 1){
				cout << "This is an odd number greater than 10";
			}
			else {
				cout << "This is an even number greater than 10";
			}
		}
		else{
			cout << "The number is less than 10";
		}


		//SWITCH STATEMENT
		char Operator;
		cout << "Enter the operator: ";
		cin >> Operator;

		switch (Operator){
		case '+':
			cout << "This is an additional operator";
			break;
		case '-':
			cout << "This is a subtraction operator";
			break;
		case '*':
			cout << "This is a multiplication operator";
			break;
		default:
			cout << "This is not an arithmetic operator";
			break;
		}

		// FOR LOOP IS A STRUCTURE FIXED EXECUTION STRUCTURE USED WHEN WE KNOW IN ADVANCE EXACTLY HOW MANY TIMES A SET OF STATEMENTS TO BE EXECUTED REPEATEDLY.
		for (int Count = 0; Count < 5; Count++){
			cout << "Kings" << endl;
		}
		int Count = 0;
		while (Count < 5){
			cout << "Douglas" << endl;
			Count++;
		}

		// DO WHILE LOOP 
		int N = 0;
		do{
			cout << "Douglas Kings" << endl;
			N++;
		} while (N < 5);

		// FUNCTIONS
		int getAge(){
			return 45;	}

		int getMyAge(int Age){
			return age;		}

		double areaofCircle(double radius){
			return 3.14*radius*radius;	}

		float getTemp(){
			float temp = 40.5;
			return temp;	}

		int getArea(int Length, int Width){
			return Length * Width;	}

		int Sum(int X){
			if (X != 0){
				return X + Sum(X - 1);	}	}

		int main(){
			int Age = getAge();
			cout << "My Age is " << Age << endl;

			float T = getTemp();
			cout << "The value of temperature is " << Temp << endl; 	}
		int Age = getMyAge(80);
		cout << "The value os age is " << Age << endl;

		int Area = getArea(6, 5);
		cout << "The area of a rectangle is " << Area << endl;

		double _Area = areaofacircle(5.5)
		cout << "The area of a circle is " << _Area << endl;

		int S = Sum(5);
		cout << "The sum of numbers from 5 to 1 is " << S << endl;
	
	return 0;
}


