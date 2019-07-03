#include<iostream>
using namespace std;
int main()
{
	int C;
	cout<<"Enter Celsius temperature : ";
	cin>>C;
	float F=1.8*C+32;
	cout<<"Fahrenheit ="<<F<<endl;
	cout<<(F>70?"Now weather in Thailand is HOT":"Now weather in Thailand is COOL")<<endl;
	return(0);	
}