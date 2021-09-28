// marks    grade
// >=90      O
// [80,90)  A+
// [70,80)  A
// [60,70) B+
// [40, 60) B
// < 40     Fail

#include <iostream>
using namespace std;

int main()
{

    int marks;
    cin >> marks;

    if (marks >= 90)
        cout << "O";
    else if (marks >= 80)
        cout << "A+";
    else if (marks >= 70)
        cout << "A";
    else if (marks >= 60)
        cout << "B+";
    else if (marks >= 40)
        cout << "B";
    else
        cout << "Pass";
}