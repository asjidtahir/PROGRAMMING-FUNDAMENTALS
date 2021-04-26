#include<iostream>
#include<fstream>
using namespace std;
void zain()
{
	int i, j;
	int size;
	int* array = new int[10];
	ifstream infile;
	infile.open("TextFile1.txt");
	cout << " Data From file \n";
	while (!infile.eof())
	{
		for (int i = 0; i < 10; i++)
		{
			infile >> array[i];
		}
		cout << endl;

		for (int i = 0; i < 10; i++)
		{
			cout << array[i] << "\t";
		}
	}
}
int frequency(int arr[], int size) 
{
	//Unique Elements of Array 
	cout << " Unique elements of the said array :\n ";
	for (int i = 0; i < size; i++)
	{
		int j;
		for (j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				break;
			}
		}
		if (i == j)
		{
			cout << arr[i] << ",";
		}
		
	}
	//For Calculating Frequency
	bool check[10];
	for (int i = 0; i < size; i++) 
	{
		check[i] = 0;
	}
	for (int i = 0; i < size; i++)
	{
		if (check[i] == 1)
		{
			continue;
		}
		int count = 1;
		for (int j = i + 1; j < size; j++) 
		{
			if (arr[i] == arr[j]) 
			{
				check[j] = 1;
				count++;
			}
		}
		cout << endl;
		cout << "frequency of " << arr[i] << " is: " << count << endl;
		
	}
}
int main()
{
	zain();
	int arr[] = { 1, 2, 3, 1, 2, 4,2,1,3,2 };
	cout << endl;
	int size = sizeof(arr) / sizeof(arr[0]);
	frequency(arr, size);
	return 0;
}