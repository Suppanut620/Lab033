#include<iostream>
#include<string>
#include <iomanip>
using namespace std;
float update_balance(string , float , float &balance);
int main ()
{
	float balance = 10000 , dollars;
	string command;
	cout << "Your balance = " << balance << endl;
	while (true)
	{
		cout << "Input command (1 or widthdraw , 2 deposit) : ";
		cin >> command;
		if(command == "0") break;
		cout << "Input amount : ";
		cin >> dollars;
		update_balance(command,dollars,balance);
		cout << "Your balance is " << fixed <<setprecision(2)<<balance << endl << endl ;
	}
}

float update_balance(string command , float dollars , float &balance)
{
	if(command == "1")balance -= dollars;
	if(command == "2")balance += dollars;
	return(balance);
}