#include <iostream>
using namespace std;
int factorial(int number)
{
    if ((number == 0) || (number == 1))
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
int main()
{
    int number;
    cout << " You want to calculate of fictorial of what number ?? \n";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number);
    return 0;
}