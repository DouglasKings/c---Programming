#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int pin;
    int password = 1234;
    int count = 0;
    int entry;
    double deposit = 0.0;
    double withdraw = 0.0;
    double balance = 0.0;
    bool isTrue = true;

    do
    {
        cout << "********** WELCOME TO DOUGLAS KINGS BANK **********\n";
        cout <<"ENTER PIN NUMBER\n";
        cin >>pin;

        if (pin == password)
        {
            do
           {
            cout << "********** MENU **********\n";
            cout <<"DEPOSIT\n";
            cout <<"WITHDRAW\n";
            cout <<"BALANCE\n";
            cout <<"EXIT\n";
            cin >>entry;

            switch(entry)
            {
            case 1:
                cout <<"DEPOSIT AMOUNT\n";
                cin >> deposit;
                balance = balance + deposit;
                break;
            case 2:
                cout <<"WITHDRAW AMOUNT\n";
                cin >> withdraw;
                balance = balance - withdraw;
                break;
            case 3:
                cout <<"current balance $ "<< balance <<endl;
                break;
            case 4:
                 cout <<"********** HAVE A NICE DAY! **********\n";
                 isTrue = false;
                 break;
            }
           }while(isTrue != false);
        }
        else
        {
          count++;
            if(count == 3)
                isTrue = false;
          else
            cout <<"INVALID PIN NUMBER\n";
          }

        }while(isTrue != false);

    return 0;
}
