#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

Matrix* create_matrix(int row, int col){
    Matrix* p_matrix = NULL;
    p_matrix = (Matrix*) malloc(sizeof(Matrix));
    p_matrix->col = col;
    p_matrix->row = row;
    p_matrix->data = (int**) malloc(sizeof(int*)*row);
    for(int i=0;i<row;i++){
        p_matrix->data[i] = (int*) calloc(col,sizeof(int));
    }
    return p_matrix;
}

void show_matrix(Matrix* p_matrix){
    for(int i=0;i<p_matrix->row;i++){
        for(int j=0;j<p_matrix->col;j++){
            printf("%d ", p_matrix->data[i][j]);
        }
        printf("\n");
    }
}

void destroy_matrix(Matrix* p_matrix){
    for(int i=0;i<p_matrix->col;i++){
        free(p_matrix->data[i]);
    }
    free(p_matrix->data);
    free(p_matrix);
}