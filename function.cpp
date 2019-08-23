#include<iostream>
#include<ctime>
using namespace std;
int checkNum(int,int);
int main()
{
	int x,num,s = 0;
	srand(time(0));
	num = 1 + rand() %10;
	cout<<"###Welcome to guessing number game###"<<endl;
	cout<<"Secret number has been chosen"<<endl;
	do{
		cout<<"Guess the number (1 to 10) : ";
		cin>>x;
		checkNum(x,num);
		s += 1;
	}while(x != num);
	cout<<"Congratulations!"<<endl;
	cout<<"The secret number is : "<<num<<endl;
	cout<<"You made "<<s<<" guesses"<<endl; 
	return(0);
}
int checkNum(int x,int num)
{
		if(x > num)
		{
			cout<<"The secret number is higher"<<"\n";
		}
		else if(x < num)
		{
			cout<<"The secret number is lower"<<"\n";
		}
	return(num,x);
}
