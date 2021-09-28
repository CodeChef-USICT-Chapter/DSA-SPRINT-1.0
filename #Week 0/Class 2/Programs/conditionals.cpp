#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x == 0 and y == 0)
    {
        cout << "origin";
    }
    else if (y == 0)
    {
        cout << "x-axis";
    }
    else if (x == 0)
    {
        cout << "y-axis";
    }
    else if (x > 0 and y > 0)
    {
        cout << "1st";
    }
    else if (x < 0 and y > 0)
    {
        cout << "2nd";
    }
    else if (x < 0 and y < 0)
    {
        cout << "3rd";
    }
    else
    {
        cout << "4th";
    }



    
}