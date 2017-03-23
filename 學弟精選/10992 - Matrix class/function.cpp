#include <iostream>
#include <stdio.h>
#include "function.h"
using namespace std;
/*
Matrix (const int n, const int [50][50]){
	
}
Matrix add(const Matrix) const;//add function
Matrix subtract(const Matrix) const;//subtract function
Matrix multiplication(const Matrix) const;//multiply function
Matrix inc() const;//increased by 1
void Transpose() const;//Transpose function
void output() const;//Note that each output should be followed by a new
                    //line character.
*/
Matrix::Matrix()
{

	int i, j;
    for(i=0; i<50; i++){
        for(j=0; j<50; j++){
            matrix[i][j] = 0;
        }
    }
}
Matrix::Matrix(const int n, const int a[50][50])
{
    matrix_size = n;
    int i, j;
    for(i=0; i<matrix_size; i++){
        for(j=0; j<matrix_size; j++){
            matrix[i][j] = a[i][j];
        }
    }
}
Matrix Matrix::add(const Matrix z) const
{
    Matrix a;
    a.matrix_size = this->matrix_size;
    int i, j;
    for(i=0; i<this->matrix_size; i++){
        for(j=0; j<this->matrix_size; j++){
            a.matrix[i][j]=this->matrix[i][j] + z.matrix[i][j];
        }
    }
    return a;
}
Matrix Matrix::subtract(const Matrix z) const
{
    Matrix a;
    a.matrix_size = this->matrix_size;
    int i, j;
    for(i=0; i<this->matrix_size; i++){
        for(j=0; j<this->matrix_size; j++){
            a.matrix[i][j]=this->matrix[i][j] - z.matrix[i][j];
        }
    }
    return a;
}
Matrix Matrix::multiplication(const Matrix z) const
{
    Matrix a;
    a.matrix_size = this->matrix_size;
    int i, j, k;
    for(i=0; i<this->matrix_size; i++){
        for(j=0; j<this->matrix_size; j++){
            for(k=0; k<this->matrix_size; k++){
                a.matrix[i][j] += this->matrix[i][k]*z.matrix[k][j];
            }
        }
    }
    return a;
}
Matrix Matrix::inc() const
{
    Matrix a;
    a.matrix_size = this->matrix_size;
    int i, j;
    for(i=0; i<this->matrix_size; i++){
        for(j=0; j<this->matrix_size; j++){
            a.matrix[i][j]=(this->matrix[i][j]+1)%10;
        }
    }
    return a;
}
void Matrix::Transpose() const
{
    Matrix a;
    a.matrix_size = this->matrix_size;
    int i, j;
    for(i=0; i<this->matrix_size; i++){
        for(j=0; j<this->matrix_size; j++){
            if(j!=0) cout<<" ";
			cout << this->matrix[j][i];
        }
        cout << endl;
    }
}
void Matrix::output() const
{
    int i, j;
    for(i=0; i<this->matrix_size; i++){
        for(j=0; j<this->matrix_size; j++){
            if(j!=0) cout<<" ";
			cout << this->matrix[i][j];
        }
        cout << endl;
    }
}
