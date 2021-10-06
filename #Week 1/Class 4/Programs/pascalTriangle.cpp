#include <iostream>
using namespace std;


// PASCAL TRAINGLE

/*

              1 
            1   1 
          1   2   1 
        1   3   3   1 
      1   4   6   4   1 
    1   5   10 10   5   1

*/

int factorial(int a)
{
  int fact = 1;
  for (int i = 1; i <= a; i++)
  {
    fact *= i;
  }
  return fact;
}

int Comb(int n, int r)
{
  //nFact
  int nFact = factorial(n);

  //rFact
  int rFact = factorial(r);

  //n_rFact
  int n_rFact = factorial(n - r);

  int C = nFact / (rFact * n_rFact);

  return C;
}

int main()
{
  int n, r;
  cin >> n >> r;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << Comb(i, j) << " ";
    }
    cout << endl;
  }

  cout << " " << endl;
  return 0;
}
