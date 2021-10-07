#include <iostream>
using namespace std;


//Problem : Print All Subarrays of a given Array


//function to print a sub array given its starting and ending point
void printSubArray(int arr[], int n, int l, int r)
{
  for (int i = l; i <= r; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}


int main()
{
  int n;
  cin >> n;

  int arr[100001];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  //Choosing every possible l,r combination
  for (int l = 0; l <= n - 1; l++)
  {
    for (int r = l; r <= n - 1; r++)
    {
      //and printing that subArray
      printSubArray(arr, n, l, r);
    }
  }


  return 0;
}