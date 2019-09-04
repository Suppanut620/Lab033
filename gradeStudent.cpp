#include<iostream>
#include<string>
using namespace std;
void ListStudent(string name[1000],int score[1000],int &num);
char Calgrade(int score[1000],int &i);
int main()
{
	int num ,score[1000] ;
	string name[1000];
	cout<<"Input Number of Student : ";
	cin>>num;
	for(int i=0;i<num;i++){
		cout<<"Input Name : ";
		cin>>name[i];
		cout<<"Input score "<< i+1 <<" : ";
		cin>>score[i];
		cout << endl;	
	}
	ListStudent(name,score,num);
	cout << "--------------------------\n\n";
	return 0;
}

void ListStudent(string name[1000],int score[1000],int &num)
{
	for(int j = 0;j<num;j++)
		cout<<"Student Name : "<< name[j] <<" Score "<< j+1 << " = "
		<<score[j]<<"Your grade "<<Calgrade(score,j)<<endl;
}
char Calgrade(int score[1000],int &j)
{
	if(score[j] <= 100 && score[j] >= 80)return('A');
	else if(score[j] <= 79 && score[j] >= 70)return('B');
	else if(score[j] <= 69 && score[j] >= 60)return('C');
	else if(score[j] <= 59 && score[j] >= 50)return('D');
	else return 'f' ;
}