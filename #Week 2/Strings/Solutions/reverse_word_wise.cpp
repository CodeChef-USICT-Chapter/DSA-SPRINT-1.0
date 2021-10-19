#include <bits/stdc++.h>

using namespace std;

void reverse(char S[], int start, int end) {

    while(start < end) {
        char temp = S[start];
        S[start] = S[end];
        S[end] = temp;
        start++;
        end--;
    }
    
}
int main() {
    
	char S[100] = "hello abc hel baba";
	int n = strlen(S);
	reverse(S, 0, n - 1);
	int start = 0;
	int end = 0;
	int i = 0;
	while(i <= n) {
	    if(S[i] == ' ' || S[i] == '\0') {
	        reverse(S, start, end);
	        start = end + 2;
	        end = start;
	    }
	    else{
	        end = i;
	    }
	    i++;
	}

	cout << S;
	return 0;
	
}