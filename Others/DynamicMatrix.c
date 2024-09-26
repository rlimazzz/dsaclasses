#include <stdlib.h>
#include <stdio.h>

int main() {
  int **matrix;
  int rows, columns;

  scanf("%d %d", &rows, &columns);

  matrix = (int**) malloc(rows * sizeof(int*));

  for(int i = 0; i < rows;i++) {
    matrix[i] = (int*) malloc(columns * sizeof(int));

    for(int j = 0; j < columns;j++) {
      scanf("%d", &matrix[i][j]);
    }
  } 

  printf("\n");

  for(int i = 0;i < rows;i++) {
    for(int j = 0;j < columns;j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
 
  for(int i = 0; i < columns;i++) {
    free(matrix[i]);
  }

  free(matrix);
  
  return 0;
}
