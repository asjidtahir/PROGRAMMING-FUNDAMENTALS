#include <iostream>
#include <string>
using namespace std;
int main()
{

	int a;
	int sum = 0;
	int choice;
	do
	{
		cout << "Press 1). to check number \n";
		cout << "Press 0). to close the program \n";
		cin >> choice;
		if (choice == 1)
		{
			cout << "Enter the Number to check \n";
			cin >> a;
			if (a >= 0)
			{
				for (int i = 1; i < a; i++)
				{
					if (a % i == 0)
					{
						sum = sum + i;
					}
				}
				if (a == sum)
				{
					cout << a << " is a Happy Number !\n";
				}
				else if (a != sum)
				{
					cout << a << " is not a Happy Number !\n";
				}
			}
			else
			{
				cout << "Please Enter a Positive Number \n";
			}
		}
		else
		{
			cout << "Invalid Condition \n";
		}
	} while (choice != 0);

	return 0;
}