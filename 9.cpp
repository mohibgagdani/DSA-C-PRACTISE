// Question 9: Create a Class for Matrix Operations
// Problem: Implement a class `Matrix` with member functions for addition, subtraction, and multiplication of
// matrices. Use proper constructors to initialize the matrices.
// Input Example:
// Matrix A:
// 1 2
// 3 4
// Matrix B:
// 5 6
// 7 8
// Output Example:
// Matrix Addition Result:
// 6 8
// 10 12


#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    vector<vector<int> >mat;
    int rows;
    int cols;

public:
   
    Matrix(int r, int c) : rows(r), cols(c) {
        mat.resize(rows, vector<int>(cols, 0));
    }

    void m1(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            mat[r][c] = value;
        }
    }

    int m2(int r, int c) const {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            return mat[r][c];
        }
        return -1;
    }

    Matrix add(const Matrix& A) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.mat[i][j] = mat[i][j] + A.mat[i][j];
            }
        }
        return result;
    }

    Matrix subtract(const Matrix& A) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.mat[i][j] = mat[i][j] - A.mat[i][j];
            }
        }
        return result;
    }

    Matrix multiply(const Matrix& A) const {
        Matrix result(rows, A.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < A.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.mat[i][j] += mat[i][k] * A.mat[k][j];
                }
            }
        }
        return result;
    }

    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols, value;

    cout << "Enter the number of rows & column : ";
    cin >> rows >> cols;

    Matrix mat1(rows, cols);
    Matrix mat2(rows, cols);

    cout << "Enter values for Matrix 1:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> value;
            mat1.m1(i, j, value);
        }
    }

    cout << "Enter values for Matrix 2:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> value;
            mat2.m1(i, j, value);
        }
    }

    cout << "Matrix 1:" << endl;
    mat1.display();

    cout << "Matrix 2:" << endl;
    mat2.display();

    Matrix sum = mat1.add(mat2);
    cout << "Sum of matrices:" << endl;
    sum.display();

    Matrix sub = mat1.subtract(mat2);
    cout << "Subtraction of matrices:" << endl;
    sub.display();

    Matrix multiply = mat1.multiply(mat2);
    cout << "Multiply of matrices:" << endl;
    multiply.display();

}