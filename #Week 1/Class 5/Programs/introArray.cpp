#include <iostream>
using namespace std;


void printArray(int b[],int n){
    for(int i=0 ; i<=9 ; i++){
      cout<<b[i]<<" ";
    }
}

int main()
{
  int n;
  cin >> n;

//   int b[10]={0};

//   int b[10]={5};
  int b[10]={5,4};

  printArray(b,10);
  
  return 0;
}