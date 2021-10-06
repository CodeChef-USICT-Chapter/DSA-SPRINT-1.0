#include <iostream>
using namespace std;


//What is The Output of this Code?

void C()
{
  cout << "C";
}

void B()
{
  cout << "D";
  C();
  cout << "B";
}

int A()
{
  cout << "A";
  B();
  return 3;
}

int main()
{
  int x = A();
  cout << x << endl;
  return 0;
}

