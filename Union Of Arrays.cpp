#include <iostream>
using namespace std;
int Union(int array_1[], int array_2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (array_1[i] < array_2[j])
        {

            cout << array_1[i++] << " ";
        }

        else if (array_2[j] < array_1[i])
        {

            cout << array_2[j++] << " ";
        }

        else
        {
            cout << array_2[j++] << " ";
            i++;
        }
    }

    while (i < m)
    {

        cout << array_1[i++] << " ";
    }

    while (j < n)
    {

        cout << array_2[j++] << " ";
    }
}
int main()
{
    int array_1[] = { 1, 2, 4, 5, 6 };
    int array_2[] = { 2, 3, 5, 7 };

    int m = sizeof(array_1) / sizeof(array_1[0]);
    int n = sizeof(array_2) / sizeof(array_2[0]);

    cout << "Array of a union  is \n";
    Union(array_1, array_2, m, n);
    return 0;
}