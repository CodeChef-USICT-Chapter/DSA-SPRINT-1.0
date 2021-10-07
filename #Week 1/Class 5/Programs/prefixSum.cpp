#include <iostream>
using namespace std;

void printArray(int b[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << b[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[100001];

    //Input 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //prefixSum Array of
    //    1   3   4    6   7   8   4
    // is
    //    1   4   8   14   21  29  33
    //     +3   +4  +6   +7   +8  +4

    //Sum from [0 , r] saved at array[r]

    //Calculating Prefix Array
    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
    }
    printArray(arr, n);

    //  sum of range [l , r] can be calculated by 
    //  arr[r] - arr[l-1]
    //  why?
    //  sum(0,r) - sum(0,l-1) = sum(l,r)

    //1   3   4   6   7   8   4
    //-------------------->    // 0,r
    //-------->                // 0,l-1
    //            |-------|    // l,r


    int l, r;
    cin >> l >> r;

    int ans = arr[r] - arr[l - 1];
    cout << endl;
    cout << ans;

    //now it has becme prefix array

    return 0;
}