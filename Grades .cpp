#include <iostream>
using namespace std;
int main()
{
	

int num;
cout<<"Enter your mark "<< endl;
cin >> num;
cout <<" You entered" << num; 

	if(num >= 80)
	{
	cout << " You got A grade"; 
	}
	else if ( num >=60)
	{ 
		cout <<" You got B grade";
	}
	else if ( num >=40)
	{
		cout<< " You got C grade";
	}
	else if ( num >= 40 && num <=60)
	{
		cout << " You got D grade ";
	}
	else if ( num < 40)
	{
		cout << " You Failed in this exam";
	}
return 0;
}