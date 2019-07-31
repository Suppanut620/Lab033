#include<iostream>
#include<string>
using namespace std;
int main ()
{
	char a;
	string b,p,b1,p1;
	do{
    cout<<"///////////Menu//////////\n";
	cout<<"1.Register\n";
	cout<<"2.Login\n";
	cout<<"Q.Exit Program";
	cout<<"\n------------------------\n";
	cout<<"Enter Menu : ";
	cin>>a;
	if (a == '1')
	   {
		cout<<"*******Register*******\n";
		cout<<"Input Username : ";
		cin>>b;
		cout<<"Input Password : "; 
		cin>>p;
       }
	 else  if (a == '2' )
	   {
	    int i = 0;
		do{
		cout<<"\n*******Login********\n";
		cout<<"Input Username : ";
		cin>>b1;
		cout<<"Input Password : ";
		cin>>p1;
		int F=0;
		if (b == b1 && p == p1) {
			cout<<"Username or Password correct ^_^\n";
            }
		else {
			cout<<"!!!Username or Password incorrect Please try again!!!";
		     }
		i++;
		  }while( i == 1 );
	    }
	}while(a != 'Q');cout<<"\nExit Program...\n";
	return(0);
}