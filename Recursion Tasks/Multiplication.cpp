#include <iostream>
using namespace std;
int multiply(int x, int y)
{
    if (y == 1)
    {
        return x;
    }

    else
    {
        return x + multiply(x, y - 1);
    }
}

int main()
{
    int a, b;
    cout << " Enter the numbers you want to multiply \n";
    cin >> a >> b;
    cout << " Result = " << multiply(a, b);
    return 0;
}