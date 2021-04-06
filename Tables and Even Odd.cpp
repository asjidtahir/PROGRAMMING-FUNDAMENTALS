#include<iostream>
using namespace std;
void fun()
{
	int i;
	int numbers;
	int x, y;
	cout << " Enter the numbers \n";
	for (int i = 0; i < 5; i++)
	{
		cin >> numbers;
		cout << numbers;
		if (numbers % 2 == 0)
		{
			cout << " Numbers are even \n";
			cout << " print the tables of even numbers \n";
			while (numbers <= 20)
			{
				cout << i << "*" << numbers << "=" << i * numbers << endl;
				i++;
			}
		}
		else if (numbers % 2 != 0)
		{
			cout << " Numbers are odd \n";
		}
		else
		{
			cout << " Prime numbers \n";
		}
	}
}
int main()
{
	fun();
	return 0;
}
