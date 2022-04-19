
#include <iostream>
using namespace std;
void reverse(char* x, char* y)
{
    if (x > y)
    {
        return;
    }
    else
    {
        char temp = *x;
        *x = *y;
        *y = temp;
        reverse(x + 1, y - 1);
    }
}
void reverse_sentance(char* a, char* b, char* c)
{

    if (*c == '\0')
    {
        reverse(b, c - 1);
        b = c + 1;
        reverse(a, c - 1);
        return;
    }

    if (*c == ' ')
    {
        reverse(b, c - 1);
        b = c + 1;
    }
    reverse_sentance(a, b, c + 1);
}

int main()
{

    char string[] = "cat is running";
    reverse_sentance(string, string, string);
    cout << string << "\n";
    return 0;
}
