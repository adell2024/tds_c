#ifndef MATRIX_IO_H
#define MATRIX_IO_H

void init_matrix(struct matrix *mat, int lines, int cols);
void print_matrix(struct matrix *mat);
int read_matrix_from_file(const char *filename, struct matrix *mat);
void free_matrix(struct matrix *mat);
#endif