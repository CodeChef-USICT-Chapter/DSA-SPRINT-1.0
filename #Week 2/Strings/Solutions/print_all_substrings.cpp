#include <bits/stdc++.h>

using namespace std;

void print(char string[], int startingPoint, int endingPoint) {
    for(int i = startingPoint ; i <= endingPoint ; i++) {
        cout<<string[i];
    }
    cout<<endl;
}

void printSubstrings(char string[]) {
    for(int startingPoint = 0 ; startingPoint < strlen(string) ; startingPoint++) {
        for(int endingPoint = startingPoint ; endingPoint < strlen(string) ; endingPoint++) {
            print(string, startingPoint, endingPoint);
        }
    }
}

int main() {
    char string[] =  "DSASPRINT";
    printSubstrings(string);
    return 0;
}