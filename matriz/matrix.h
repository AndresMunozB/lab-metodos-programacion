#ifndef _MATRIX_H_
#define _MATRIX_H_

typedef struct matrix{
    int** data;
    int row;
    int col;
}Matrix;

Matrix* create_matrix(int row, int col);
void show_matrix(Matrix* p_matrix);
void destroy_matrix(Matrix* p_matrix);

#endif