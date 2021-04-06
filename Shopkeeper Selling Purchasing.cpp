#include <iostream>
using namespace std;
void fun()
{
	int apples, oranges, weight, x = 0, y = 0, z = 0, a = 0, b = 0;
	cout << "**********ShopKeeper Selling Program*****************\n";

	cout << "Enter the weight  of fruits i.e Oranges & Apples \n";
	cout << "Enter the number of apples : \n";
	cin >> apples;
	cout << "Enter the number of oranges : \n";
	cin >> oranges;
	weight = apples * 105 + oranges * 120;
	while (weight != 0)
	{
		if (weight >= 100)
		{
			weight -= 100;
			x++;
		}
		 if (weight >= 50)
		{
			weight -= 50;
			y++;
		}
		 if (weight >= 20)
		{
			weight -= 20;
			z++;
		}
		if (weight >= 10)
		{
			weight -= 10;
			a++;
		}
		 if (weight >= 5)
		{
			weight -= 5;
			b++;
		}
	}
	cout << "100g-weight: " << x << "\n";
	cout << "50g-weight: " << y << "\n";
	cout << "20g-weight: " << z << "\n";
	cout << "10g-weight: " << a << "\n";
	cout << "5g-weight: " << b << "\n";
}
int main() 
{
	fun();
	return 0;
	
}