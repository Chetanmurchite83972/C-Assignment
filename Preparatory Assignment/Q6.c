#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    if(c1 != r2) {
        cout << "Matrix multiplication not possible.\n";
        return 0;
    }
    int mat1[10][10], mat2[10][10], res[10][10] = {0};
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> mat1[i][j];

    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> mat2[i][j];

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++)
            for(int k = 0; k < c1; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];

    cout << "Resultant Matrix:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
    return 0;
}