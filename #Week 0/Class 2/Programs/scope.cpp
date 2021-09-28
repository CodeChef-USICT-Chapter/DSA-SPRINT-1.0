#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    if (true)
    {
        int a = 10;
        {
            extern int a;
            cout << a;
        }
    }
}