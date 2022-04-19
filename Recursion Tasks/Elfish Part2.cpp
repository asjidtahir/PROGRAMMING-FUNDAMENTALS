 #include<iostream>
#include<string>
using namespace std;
bool x_ish(string s, string s1)
{
    int* count, counter = 0, n = s.length(), n1 = s1.length();
    count = new int[n];
    char ch[n + 1], ch1[n1 + 1];
    for (int i = 0; i < n; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s1[i] == s[j])
            {
                count[j]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (count[i] >= 1)
        {
            counter++;

        }        
    }
    if (counter == n)
    {
        return true;
    }    
    else
    {
        return false;
    }
        
}
int main()
{
    string s, s1;
    cout << "Enter the Words : ";
    cin >> s >> s1;
    int a;
    a = x_ish(s, s1);
    if (a)
    {
        cout << "Word are X-ish\n";

    }
        
    else
    {
        cout << "Words Not X-ish\n";
    }
       
    return 0;
}
