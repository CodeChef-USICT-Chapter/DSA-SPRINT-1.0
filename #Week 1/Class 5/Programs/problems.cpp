#include <iostream>
using namespace std;

void printArray(int b[],int n){
    for(int i=0 ; i<=n-1; i++){
      cout<<b[i]<<" ";
    }
    cout<<endl;
}

void reverseArray(int arr[], int n ){

    int l=0;
    int r= n-1;

    //till they cross each other
    while(l < r){

        //swapping the value at left and right index
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        
        //moving left and right one step inside
        l++;
        r--;
    }
}

bool isPalindrome(int arr[],int n){

    // eg 1 3 2 3 1    or   3 1 5 5 1 3
    int l=0;
    int r= n-1;

    //till they cross each other
    while(l < r){

        //check if integer at lth index and rth index is same 
        if(arr[l] != arr[r]){
            return false;
        }

        //moving left and right one step inside
        l++;
        r--;
    }

    //if it reaches this line, that means has not been return yet 
    //  -> so all pairs were same 
    //  -> so it is a palindrome
    return true;
    

}

int main()
{
  int n;
  cin >> n;

  int arr[100001];

  for (int i = 0; i < n; i++)
  {
      cin>> arr[i];
  }

  printArray(arr,n);
  cout<<endl;

  reverseArray(arr,n);

  printArray(arr,n);
  return 0;
}