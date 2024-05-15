#include <iostream>

using namespace std;

int main()
{
    int X = 1000;
    int sum = 0, _count = 0;

    do{
       if(X%2==0){
        sum += X;
        _count++;
       }
       X++;

    }while(X<=2500);

    //explicit conversion.
    float avg = (float) (sum/_count);

    cout << "The average of numbers from 1000 to 2500 is "<< avg;

    return 0;
}
