#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100001];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sum
    int sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        sum += arr[i];
    }

    //Max
    int max = INT32_MIN;

    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    //Min
    int min = INT32_MAX;

    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    //Search
    int x = 5;

    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == x)
        {
            cout << "5Found" << endl;
        }
    }

    cout << min << endl;
    return 0;
}