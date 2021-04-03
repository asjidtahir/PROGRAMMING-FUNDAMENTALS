#include<iostream>
using namespace std;
int main()
{
	int format;
	int array[10] = { 1,2,3,4,5,6,6,7,8,9 };
	char z[5] = { 'b','c','d','e','g' };
	string a[5] = { "Ajji","Ibrar","Qari","Ali","Usman" };
	float v[5] = { 1.2,2.2,2.0,3.4,5.4 };
	double d[5] = { 1.234,3.45,3.23,34.6,5.678 };
	cout << " Press 1) for Integer type \n";
	cout << " Press 2) for Char type \n";
	cout << " Press 3) for String type \n";
	cout << " Press 4) for Float type \n";
	cout << " Press 5) for Double type \n";
	cout << "In which format of datatype you want to print your numbers \n";
	cin >> format;
	do
	{

		if (format == 1)
		{
			for (int i = 0; i < 10; i++)
			{
				cout << array[i] << endl;
			}
			break;
		}
		if (format == 2)
		{
			for (int i = 0; i < 5; i++)
			{
				cout << z[i] << endl;
			}
			break;
		}
		if (format == 3)
		{
			for (int i = 0; i < 5; i++)
			{
				cout << a[i] << endl;
			}
			break;
		}
		if (format == 4)
		{
			for (int i = 0; i < 5; i++)
			{
				cout << v[i] << endl;
			}
			break;
		}
		if (format == 5)
		{
			for (int i = 0; i < 5; i++)
			{
				cout << d[i] << endl;
			}
			break;
		}
	} while (format != 6);
	return 0;
}