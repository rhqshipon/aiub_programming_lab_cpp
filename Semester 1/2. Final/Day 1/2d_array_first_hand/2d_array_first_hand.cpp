#include <iostream>
using namespace std;

int main() {
    int row_a, column_a, row_b, column_b, choice;

    cout << "[1] Matrix addition" << endl;
    cout << "[2] Matrix subtraction" << endl;
    cout << "[3] Matrix multiplication" << endl;
    cout << "[4] Matrix division (undefined, will exit)" << endl;
    cout << "[5] Print an input matrix" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    // Input for the first matrix
    cout << "Number of rows for 1st matrix: ";
    cin >> row_a;
    cout << "Number of columns for 1st matrix: ";
    cin >> column_a;
    int a[row_a][column_a];

    cout << "Enter elements for 1st matrix: ";
    for (int i = 0; i < row_a; i++) {
        for (int j = 0; j < column_a; j++) {
            cin >> a[i][j];
        }
    }

    // Input for the second matrix (if applicable)
    if (choice != 5) {
        cout << "Number of rows for 2nd matrix: ";
        cin >> row_b;
        cout << "Number of columns for 2nd matrix: ";
        cin >> column_b;
        int b[row_b][column_b];

        cout << "Enter elements for 2nd matrix: ";
        for (int i = 0; i < row_b; i++) {
            for (int j = 0; j < column_b; j++) {
                cin >> b[i][j];
            }
        }

        // Resultant matrix
        int c[row_a][column_b] = {0};

        switch (choice) {
            case 1: // Matrix addition
                if (row_a == row_b && column_a == column_b) {
                    for (int i = 0; i < row_a; i++) {
                        for (int j = 0; j < column_a; j++) {
                            c[i][j] = a[i][j] + b[i][j];
                        }
                    }
                } else {
                    cout << "Error: Matrices must have the same dimensions for addition!" << endl;
                    return 1;
                }
                break;
            case 2: // Matrix subtraction
                if (row_a == row_b && column_a == column_b) {
                    for (int i = 0; i < row_a; i++) {
                        for (int j = 0; j < column_a; j++) {
                            c[i][j] = a[i][j] - b[i][j];
                        }
                    }
                } else {
                    cout << "Error: Matrices must have the same dimensions for subtraction!" << endl;
                    return 1;
                }
                break;
            case 3: // Matrix multiplication
                if (column_a == row_b) {
                    for (int i = 0; i < row_a; i++) {
                        for (int j = 0; j < column_b; j++) {
                            c[i][j] = 0;
                            for (int k = 0; k < column_a; k++) {
                                c[i][j] += a[i][k] * b[k][j];
                            }
                        }
                    }
                } else {
                    cout << "Error: Number of columns in 1st matrix must equal number of rows in 2nd matrix!" << endl;
                    return 1;
                }
                break;
            case 4: // Matrix division (undefined)
                cout << "Matrix division is not defined. Exiting!" << endl;
                return 1;
            default:
                cout << "Invalid choice!" << endl;
                return 1;
        }

        // Output resultant matrix
        cout << "Output Matrix:" << endl;
        for (int i = 0; i < row_a; i++) {
            for (int j = 0; j < column_b; j++) {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    } else { // Print the input matrix
        cout << "Input Matrix:" << endl;
        for (int i = 0; i < row_a; i++) {
            for (int j = 0; j < column_a; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
