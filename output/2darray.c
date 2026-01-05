#include <stdio.h>

#define MAX 10  // Maximum size of matrix

// Function to read a matrix
void readMatrix(int mat[MAX][MAX], int rows, int cols) {
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);
}

// Function to display a matrix
void displayMatrix(int mat[MAX][MAX], int rows, int cols) {
    printf("Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%4d", mat[i][j]);
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = mat1[i][j] + mat2[i][j];
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];
        }
}

int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], sum[MAX][MAX], product[MAX][MAX];
    int r1, c1, r2, c2;


    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    
    readMatrix(mat1, r1, c1);
    readMatrix(mat2, r2, c2);


    displayMatrix(mat1, r1, c1);
    displayMatrix(mat2, r2, c2);

    
    if (r1 == r2 && c1 == c2) {
        addMatrices(mat1, mat2, sum, r1, c1);
        printf("\nMatrix Addition Result:\n");
        displayMatrix(sum, r1, c1);
    } else {
        printf("\nMatrix addition not possible (dimension mismatch).\n");
    }

    
    if (c1 == r2) {
        multiplyMatrices(mat1, mat2, product, r1, c1, c2);
        printf("\nMatrix Multiplication Result:\n");
        displayMatrix(product, r1, c2);
    }else{
        printf("/n matrix multiplication not 
            ")