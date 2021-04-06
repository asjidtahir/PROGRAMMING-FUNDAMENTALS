#include <iostream>
#include <cmath>
using namespace std;
void average()
{
    int numbers[10], sum = 0;
    float average = 0.0;
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }
    average = sum / 10;
    cout << " Average is " << average << endl;

}
void percentage()
{
    float sum = 0.0;
    int x[10];
    float percentage = 0.0;
    for (int i = 0; i < 10; i++)
    {
        cin >> x[i];
        sum += x[i];
    }
    percentage = sum / 10 * 100;
    cout << "Percentage is " << percentage << endl;

}
float calculateSD(float data[]);
float calculateSD(float data[])
{
    float sum = 0.0, mean, standardDeviation = 0.0;

    int i;

    for (i = 0; i < 10; i++)
    {
        sum += data[i];
    }

    mean = sum / 10;

    for (i = 0; i < 10; i++)
    {
        standardDeviation += pow(data[i] - mean, 2);
    }

    return sqrt(standardDeviation / 10);
}

int main()
{
    int i;
    float data[10];

    cout << "Enter 10 elements: \n";
    for (i = 0; i < 10; i++)
    {
        cin >> data[i];
    }
    cout << endl << "Standard Deviation = " << calculateSD(data);
    average();
    percentage();
    return 0;
}
