#include <iostream>

using namespace std;

void spriralPrint(int matrix[][100], int rowEnd, int columnEnd) {
    int size = rowEnd * columnEnd;
    int ans[size];
    int index = 0;
    int rowStart = 0, columnStart = 0;
    rowEnd--;
    columnEnd--;
    while(rowStart <= rowEnd && columnStart <= columnEnd)
    {
        for(int i = columnStart ; i <= columnEnd ; i++)
        {
            ans[index] = matrix[rowStart][i];
            index++;
        }
        rowStart++;
        for(int i = rowStart ; i <= rowEnd ; i++)
        {
            ans[index] = matrix[i][columnEnd];
            index++;
        }
        columnEnd--;
        if(rowStart <= rowEnd)
        {
            for(int i = columnEnd ; i >= columnStart ; i--)
            {
                ans[index] = matrix[rowEnd][i];
                index++;
            }
            rowEnd--;
        }
        if(columnStart <= columnEnd)
        {
            for(int i = rowEnd ; i >= rowStart  ;i--)
            {
                ans[index] = matrix[i][columnStart];
                index++;
            }
            columnStart++;
        }
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
    spriralPrint(matrix, 3, 4);
    return 0;
}