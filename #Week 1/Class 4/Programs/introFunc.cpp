#include <iostream>
using namespace std;

//  Functions
//  input Parameters ---->|Some Processing|---> return Output

//Syntax 
/*


<return-dataType> nameOfFunction(<input parameter>)
  {
    ...BODY
    return value;
  }


*/


// f(x)= x^2 + x + 1
int f(int x)
{
  return x * x + x + 1;
}

// g(x,y) = x +y + 1
int g(int x, int y)
{
  return x + y + 1;
}


int main()
{
  int n;
  cin >> n;

  cout << f(n) << " " << g(4, 6) << endl;
  return 0;
}