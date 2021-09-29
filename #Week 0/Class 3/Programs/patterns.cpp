#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     // i stars
    //     // int val = 1;
    //     char ch = 'A' + i - 1;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         // cout << "*";
    //         // cout << val;
    //         // val++;

    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // for (int i = n; i >= 1; i--)
    // {
    //     // i stars

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     // n- i spaces
    //     for (int k = 1; k <= n - i; k++)
    //     {
    //         cout << " ";
    //     }

    //     // i stars
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {

        // n-i spaces

        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }

        // 2*i -1 stars

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {

        // n-i spaces

        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }

        // 2*i -1 stars

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}