#include <stdio.h>

int main()
{
  int i, j, tmp, arr_len;

  printf("\n\n\tPrints the post-sorted index+1 of each item in an array.");
  printf("\n\nEnter the length of array you want to sort:\n");
  scanf("%d", &arr_len);

  int arr[arr_len], sorted[arr_len];
  printf("\n");

  printf("Enter the values to fill the array:\t\n");
  for (i = 0; i < arr_len; i++) {
    scanf("%d", &arr[i]);
    sorted[i] = arr[i];
  } 
  printf("\n");

  for(i = 0; i < arr_len ; i++) {
    tmp = sorted[i];
    j = i;

    while(j > 0 && tmp < sorted[j-1]) {
      sorted[j] = sorted[j-1];
      j = j-1;
    }
    sorted[j] = tmp;
  }
  printf("[ ");
  for (i = 0; i < arr_len; i++) {
    for(j = 0; j < arr_len; j++) {
      if(arr[i] == sorted[j]) {
        printf("%d, ", j+1);
        break;
      }
    }
  } 
  printf("]\n\n");
}