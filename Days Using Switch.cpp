#include<iostream>
using namespace std;
int main()
{
	int x, n;
	cin >> x;
	if (true)
	{
		(x > 35);
		n = 1;
	}
	else if (x > 25 && x < 35)
		n = 2;
	else
		n = 3;

	switch (n)
	{
	case 1:
		cout << "Hot Day";

	case 2:
		cout << "pleasent Day";

	case 3:
		cout << "cool Day";

	}
	system("pause");
	return 0;
}