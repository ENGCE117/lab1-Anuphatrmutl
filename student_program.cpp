#include <iostream>

using namespace std;

void GetMatrix(int **&value, int &row, int &col);
void PrintMatrix(int **value, int row, int col);

int main() {
    int **data, m, n;

    GetMatrix(data, m, n);
    PrintMatrix(data, m, n);

    for (int i = 0; i < m; i++) {
        delete[] data[i];
    }
    delete[] data;

    return 0;
}

void GetMatrix(int **&value, int &row, int &col) {
    cout << "Enter rows and columns: ";
    cin >> row >> col;

    value = new int *[row];
    for (int i = 0; i < row; i++) {
        value[i] = new int[col];
    }

    cout << "Enter matrix values:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> value[i][j];
        }
    }
}

void PrintMatrix(int **value, int row, int col) {
    cout << "Matrix (" << row << "x" << col << "):\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << value[i][j] << " ";
        }
        cout << endl;
    }
}
