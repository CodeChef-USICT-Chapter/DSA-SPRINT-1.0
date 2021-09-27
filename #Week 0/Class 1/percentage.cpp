#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3, s4, s5;

    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    int marksObtained = s1 + s2 + s3 + s4 + s5;

    cout << (marksObtained / 500.0) * 100.0 << endl;
}