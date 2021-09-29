#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int count = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         count++;
    //     }
    // }

    // if (count == 2)
    // {
    //     cout << n << " is Prime";
    // }
    // else
    // {
    //     cout << n << " is not Prime";
    // }

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int f1 = i;

            int f2 = n / i;

            count++; // f1
            cout << f1 << " ";

            if (f1 != f2)
            {
                count++;
                cout << f2 << endl;
            }

            // if (count > 2)
            // {
            //     break;
            // }
        }
    }

    // if (count == 2)
    // {
    //     cout << n << " is Prime";
    // }
    // else
    // {
    //     cout << n << " is not Prime";
    // }
}