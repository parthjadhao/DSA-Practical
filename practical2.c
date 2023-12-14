#include <stdio.h>

#define MAX_ROWS 3
#define MAX_COLS 3

int main()
{
     int matrix[MAX_ROWS][MAX_COLS];

     printf("Enter the elements of the 2D array (%dx%d):\n", MAX_ROWS, MAX_COLS);
     for (int i = 0; i < MAX_ROWS; ++i)
     {
          for (int j = 0; j < MAX_COLS; ++j)
          {
               printf("Enter element at position (%d, %d): ", i + 1, j + 1);
               scanf("%d", &matrix[i][j]);
          }
     }

     printf("\nEntered elements of the 2D array:\n");
     for (int i = 0; i < MAX_ROWS; ++i)
     {
          for (int j = 0; j < MAX_COLS; ++j)
          {
               printf("%d\t", matrix[i][j]);
          }
          printf("\n");
     }

     return 0;
}