#include <iostream>

using namespace std;

int length(char input[]) {
    
    int count = 0;
    for(int i = 0 ; input[i] != '\0' ; i++) {
        count++;
    }
    return count;
    
}

string isPalindrome(char S[]) {
    
    int n = length(S);
	for (int i = 0 ; i < n / 2 ; i++) {

		if (S[i] != S[n - i - 1]) {
			return "No";
		}
	}
	return "Yes";
	
}

int main()
{
	char S[] = "ABCDCBAA";
	cout << isPalindrome(S);

	return 0;
}
