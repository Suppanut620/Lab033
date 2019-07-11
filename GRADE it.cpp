#include<iostream>
using namespace std;
int main()
{
    int score;
	cout<<"Enter your score : ";
	cin>>score;
	if (score >= 90 && score <= 100)
	{
		cout<<"Grade is A";
	}
	else if (score >= 80 && score <=89 )
	{
		cout<<"Grade is B";
	}
	else if (score >= 70 && score <=79 )
	{
		cout<<"Grade is C";
	}
	else if (score >= 60 && score <=69 )
	{
		cout<<"Grade is D";
	}
	else
	{
		cout<<"Grade is F";
	}
	cout<<"\n";
	return(0);	
}