#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    // if (n == 1)
    // {
    //     //
    // }
    // else if (n == 2)
    // {
    //     //
    // }
    // else if (n == 3)
    // {
    //     //
    // }
    // else
    // {
    //     //
    // }

    switch (n)
    {
    case 1:
        cout << "I am in case1" << endl;
        cout << "I am again in case1" << endl;
        break;

    case 2:
        cout << "I am in case2" << endl;
        cout << "I am again in case2" << endl;
        break;
    case 3:
        //
        cout << "I am in case3" << endl;
        cout << "I am again in case3" << endl;
        break;

        // default:
        //     cout << "I am in default" << endl;
        //     cout << "I am again in default" << endl;
    }
}