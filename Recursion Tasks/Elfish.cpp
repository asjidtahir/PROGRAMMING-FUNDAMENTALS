#include<iostream>
#include<string>
using namespace std;
void elfish(string s)
{
    int count[3] = { 0 }, n = s.length();

    for (int i = 0; i <= n; i++)
    {
        if (s[i] == 'e')
        {
            count[0]++;

        }
            
        if (s[i] == 'l')
        {
            count[1]++;
        }
           
        if (s[i] == 'f')
        {
            count[2]++;
        }
          
    }
    if (count[0] >= 1 && count[1] >= 1 && count[2] >= 1)
    {
        cout << "Given Word is Elfish\n";
    }      
    else
    {
        cout << "Given Word is not Elfish\n";
    }   
}
int main()
{
    string s;
    cout << "Enter the Number to test for Being Elfish: ";
    cin >> s;
    elfish(s);
    return 0;
}