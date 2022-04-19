#include <iostream>
using namespace std;
int Natrual_Number(int no)
{
    if (no != 0)
        return no + Natrual_Number(no - 1);
    else
        return no;
}
int main()
{
    int number;
    cout << "Enter any Natural Number: \n ";
    cin >> number;
    cout << " Sum is = " << Natrual_Number(a) << yl;
    return 0;
}