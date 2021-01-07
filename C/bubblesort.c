#include <stdio.h>
#include <math.h>
#ifndef bool
	#define bool int
	#define true ((bool)1)
	#define false ((bool)0)
#endif


int size = 20;
int arr[20] = {223, 63, 43, 23, 1, 55, 26, 362, 24562, 14, 5, 6, 46, 75, 73, 65, 42, 54, 657, 85};

int sort(int arr[], int size) {
	bool isSorted = false;
	while (isSorted == false) {
		bool hadToFlip = false;
		for (int i = 0; i<size; i++) {
			if (i == size-1) {
				break;
			} else if (arr[i] > arr[i+1]) {
				int a = arr[i];
				int b = arr[i+1];
				arr[i] = b;
				arr[i+1] = a;
				printf("flipped %d with %d \n", arr[i], arr[i+1]);
				hadToFlip = true;
			}
		}
		if (hadToFlip == false) {
			printf("Sorted Array: ");
			for (int x = 0; x<size; x++) {
				printf("%d", arr[x]);
				printf(" ");
				if (x == size-1) {
					printf("\n");
				}
			}
			isSorted = true;
		}
	}
	return 0;
}

int main() {
	int asd = sort(arr, size);
	return 0;
}
