#include <iostream>
using namespace std;

void multiplyMatrices(int A[][10], int B[][10], int C[][10], int m, int n, int p);

int main() {
    int m, n, p, q;
    
    cout << "Enter rows and columns of the first matrix: ";
    cin >> m >> n;
    cout << "Enter rows and columns of the second matrix: ";
    cin >> p >> q;
    
    // Multiplication rule
    if(n != p) {
        cout << "Error: Matrix multiplication not possible!" << endl;
        cout << "Number of columns in first matrix (" << n 
             << ") must equal number of rows in second matrix (" << p << ")" << endl;
        return 0;
    }
    
    //(using max size 10x10 for simplicity)
    int A[10][10], B[10][10], C[10][10];
    
    // Input matrices
    cout << "\nEnter elements of the first matrix:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    cout << "\nEnter elements of the second matrix:" << endl;
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }
    
    // Multiply matrices
    multiplyMatrices(A, B, C, m, n, q);
    
    // Display result
    cout << "\nResultant Matrix after Multiplication:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// Function to multiply two matrices
void multiplyMatrices(int A[][10], int B[][10], int C[][10], int m, int n, int q) {
    // Initialize result matrix to 0
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }
    
    // Perform multiplication
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
