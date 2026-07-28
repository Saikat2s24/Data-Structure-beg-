#include<iostream>
#include<climits>
using namespace std;

int getMAX(int num[], int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }

    return max;
}

int getMIN(int num[], int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (min > num[i])
        {
            min = num[i];
        }
    }

    return min;
}

int main()
{
    int size;

    cout << "Enter the size: ";
    cin >> size;

    int arr[100000];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The maximum number is: " << getMAX(arr, size) << endl;
    cout << "The minimum number is: " << getMIN(arr, size) << endl;

    return 0;
}