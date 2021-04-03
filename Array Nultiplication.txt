#include<iostream>
#include<cmath>
using namespace std;
double numbers(double num_1,double num_2, double num_3)
{
	return ((num_1+num_2)*num_3);
}
int main()
{
	int num_1,num_2,num_3;
	cout<<"Enter your numbers:"<<endl;
	cin>>num_1;
	cin>>num_2;
	cin>>num_3;
	cout<<numbers(num_1,num_1,num_3)<<endl;
	system("pause");
}
