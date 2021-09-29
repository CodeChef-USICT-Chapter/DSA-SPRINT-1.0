#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    for (int n = 1; n <= N; n++)
    {

        if (n == 1 or (n > 2 and n % 2 == 0))
        {
            continue;
        }

        int count = 0;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                int f1 = i;

                int f2 = n / i;

                count++; // f1
                // cout << f1 << " ";

                if (f1 != f2)
                {
                    count++;
                    // cout << f2 << endl;
                }

                if (count > 2)
                {
                    break;
                }
            }
        }

        if (count == 2)
        {
            cout << n << endl;
        }
    }

    int i = 1;
    while (i <= N)
    {

        if (i % 2 == 0)
        {
            i++;
            continue;
        }
        i++;
    }
}