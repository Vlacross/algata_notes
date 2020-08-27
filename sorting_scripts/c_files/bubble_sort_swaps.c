#include <stdio.h>

int main() {
	int arr_len, i, k, tmp, swaps = 0;
	printf("Enter the number of items in the array:\n");
	scanf("%d", &arr_len);
	int arr[arr_len];
	printf("\n");

	for(i = 0; i < arr_len; i++) {
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < arr_len-1; i++) {
		for(k = 0; k < arr_len-i-1; k++) {
			if(arr[k+1] < arr[k]) {
				tmp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = tmp;
				swaps += 1;
			}
		}
	}

  printf("\n\t\tNumber of swaps = %d\n\n", swaps);
}