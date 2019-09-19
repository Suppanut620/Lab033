#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;
void display(int num[5][6]);
void graph(int num[5][6]);
int main()
{
	srand(time(NULL));
	int num[5][6]={ };

	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++)
		{
			int num1 = rand() % 10;
			num[i][j] += num1;
		}

	}
	display(num);
	graph(num);
	return 0;
}
void display(int num[5][6])
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<num[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void graph(int num[5][6])
{
	cout<<setfill('-')<<setw(20)<<"-"<<"display graph"<<setfill('-')<<setw(20)<<"-"<<endl;
	cout<<"\t0\t1\t2\t3\t4\t5"<<endl;
	cout<<setfill('-')<<setw(53)<<"-"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<i<<"|\t";
		for(int j=0;j<6;j++)
		{
			if (num[i][j] != 0)
			{
				cout<<"*\t";
			}
			else if(num[i][j] == 0)
			{
				cout<<" \t";
			}
		}
	cout<<endl;
	}
}