#include <iostream>

using namespace std;

int length(char input[]) {
    
    int count = 0;
    for(int i = 0 ; input[i] != '\0' ; i++) {
        count++;
    }
    return count;
    
}

void reverse(char S[]) {
    int n = length(S);
    int start = 0;
    int end = n - 1;
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
	reverse(S);
    cout<<S;
}