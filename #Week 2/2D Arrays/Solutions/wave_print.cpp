#include <iostream>

using namespace std;

void wavePrint(int matrix[][100], int rows, int column) {
    int size = rows * column;
    int ans[size];
    int index = 0;
    int wave = 0;
    int j = 0;
    while(j < column) {
        if(wave == 0) {
            for(int i = 0 ; i < rows ; i++) {
                ans[index] = matrix[i][j];
                index++;
            }
        }
        else {
            for(int i = rows - 1 ; i >= 0 ; i--) {
                ans[index] = matrix[i][j];
                index++;
            }
        }
        wave = (j + 1) % 2;
        j++;
    }
    for(int i = 0 ; i < size ; i++) {
        cout<<ans[i]<<" ";
    }
}
 
int main() {
    int matrix[100][100] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    wavePrint(matrix, 3, 4);
    return 0;
}