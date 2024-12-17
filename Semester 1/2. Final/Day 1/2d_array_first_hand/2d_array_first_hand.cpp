#include <iostream>
using namespace std;

int main() {
    int row_a, column_a, row_b, column_b, choice, maxx_element;

    cout << "[1] Matrix addition" << endl;
    cout << "[2] Matrix subtraction" << endl;
    cout << "[3] Matrix multiplication" << endl;
    cout << "[4] Matrix division (undefined, will exit)" << endl;
    cout << "[5] Print an input matrix" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    // Input for the first matrix
    cout << endl;
    cout << "Number of rows for the 1st matrix: ";
    cin >> row_a;
    cout << "Number of columns for the 1st matrix: ";
    cin >> column_a;
    int a[row_a][column_a];

    cout << endl;
    cout << "Enter elements for the 1st matrix," << endl;
    maxx_element = 0;
    for (int i = 0; i < row_a; i++) {
        for (int j = 0; j < column_a; j++) {
            maxx_element++;
            cout << "Enter element " << maxx_element << ": ";
            cin >> a[i][j];
        }
    }

    // Input for the second matrix (if applicable)
    if (choice != 5) {
        cout << endl;
        cout << "Number of rows for the 2nd matrix: ";
        cin >> row_b;
        cout << "Number of columns for the 2nd matrix: ";
        cin >> column_b;
        int b[row_b][column_b];

        cout << endl;
        cout << "Enter elements for the 2nd matrix," << endl;
        maxx_element = 0;
        for (int i = 0; i < row_b; i++) {
            for (int j = 0; j < column_b; j++) {
                maxx_element++;
                cout << "Enter element " << maxx_element << ": ";
                cin >> b[i][j];
            }
        }

        // Define Resultant matrix
        int c[row_a][column_b] = {0};

        switch (choice) {
            case 1: // Matrix addition
                if (row_a == row_b && column_a == column_b) {
                    for (int i = 0; i < row_a; i++) {
                        for (int j = 0; j < column_a; j++) {
                            c[i][j] = a[i][j] + b[i][j];
                        }
                    }
                }
                else {
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
                }
                else {
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
                }
                else {
                    cout << "Error: Number of columns in 1st matrix must equal number of rows in 2nd matrix!" << endl;
                    return 1;
                }
                break;
            case 4: // Matrix division (A * B^(-1))
                cout << "Matrix division is not defined yet. Exiting!" << endl;
                return 1;
                break;

                if (row_b == column_b) {
                    // Step 1: Calculate the determinant of matrix B (for a 2x2 matrix here)
                    int det = b[0][0] * b[1][1] - b[0][1] * b[1][0];
                    if (det == 0) {
                        cout << "Matrix B is singular, cannot perform division!" << endl;
                        return 1;
                    }

                    // Step 2: Calculate the inverse of matrix B (Adjoint / Det) for 2x2
                    int adj[2][2];
                    adj[0][0] = b[1][1];
                    adj[0][1] = -b[0][1];
                    adj[1][0] = -b[1][0];
                    adj[1][1] = b[0][0];

                    int inv[2][2];
                    inv[0][0] = adj[0][0] / det;
                    inv[0][1] = adj[0][1] / det;
                    inv[1][0] = adj[1][0] / det;
                    inv[1][1] = adj[1][1] / det;

                    // Step 3: Perform matrix multiplication A * B^(-1)
                    int c[row_a][column_b] = {0}; // Resultant matrix
                    for (int i = 0; i < row_a; i++) {
                        for (int j = 0; j < column_b; j++) {
                            for (int k = 0; k < row_b; k++) {
                                c[i][j] += a[i][k] * inv[k][j]; // Multiply A by B's inverse
                            }
                        }
                    }

                    // Output the resultant matrix (A * B^(-1))
                    cout << endl;
                    cout << "Output Matrix (A * B^(-1)):" << endl;
                    for (int i = 0; i < row_a; i++) {
                        for (int j = 0; j < column_b; j++) {
                            cout << c[i][j] << " ";
                        }
                        cout << endl;
                    }
                } else {
                    cout << "Matrix B must be square to perform division!" << endl;
                    return 1;
                }
                break;

            default:
                cout << "Invalid choice!" << endl;
                return 1;
        }

        // Output resultant matrix
        cout << endl;
        cout << "Output Matrix:" << endl;
        cout << endl
        for (int i = 0; i < row_a; i++) {
            for (int j = 0; j < column_b; j++) {
                cout << " " << c[i][j];
            }
            cout << endl;
        }
        cout << endl
    }
    else { // Print the input matrix
        cout << endl;
        cout << "Input Matrix:" << endl;
        for (int i = 0; i < row_a; i++) {
            for (int j = 0; j < column_a; j++) {
                cout << " " << a[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
