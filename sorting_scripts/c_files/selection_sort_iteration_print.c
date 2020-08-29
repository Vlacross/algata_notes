#include<stdio.h>

int main() {

  int arr_len, stop, valid, valid2, tmp, i, j, minimum;

  printf("Enter the size of array you want:\t");
  valid = scanf("%d", &arr_len);
  while(valid != 1) {
    while((tmp=getchar()) !=EOF && tmp != '\n' && tmp != ' ') {
      printf("Invalid entry - array size must be an integer. Try again:\n");
      valid = scanf("%d", &arr_len);
    }
  }
  printf("\n");

  int arr[arr_len];
  for(i = 0; i < arr_len; i++) {
    scanf("%d", &arr[i]);
  }
  printf("\n");

  while(valid2 != 1) {
    printf("Enter the iteration step from which to print the state of the array:\n");
    printf("Must be an integer less than the input array length:\n");
    valid2 = scanf("%d", &stop);
    if (stop < 0 || stop > arr_len-1) {
      valid2 = 0;
       printf("Invalid entry\n\n");
    }
    
  }

  printf("\n\n\tSorting:\n");

  for(i = 0; i <= stop; i++) {
    minimum = i;
    for(j = i + 1; j < arr_len; j++) {
      if(arr[j] < arr[minimum]) {
        minimum = j;
      }
    }

    tmp = arr[i];
    arr[i] = arr[minimum];
    arr[minimum] = tmp;
  }
  printf("\n\n\tYour array sorted through position %d is:  [ ", stop+1);

  for(i = 0; i <= arr_len-1; i++) {
    printf("%d ", arr[i]);
  }
  printf("]\n\n");
  return 0;
}