#include <stdio.h>

#define MAX_SIZE 100

int main()
{
     int arr[MAX_SIZE];
     int n;

     printf("Enter the number of elements (max %d): ", MAX_SIZE);
     scanf("%d", &n);

     printf("Enter the elements of the array:\n");
     for (int i = 0; i < n; ++i)
     {
          printf("Enter element %d: ", i + 1);
          scanf("%d", &arr[i]);
     }

     printf("\nEntered elements of the array:\n");
     for (int i = 0; i < n; ++i)
     {
          printf("%d ", arr[i]);
     }

     return 0;
}