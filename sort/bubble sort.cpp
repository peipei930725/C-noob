#include<stdio.h>
#include<stdlib.h>

int main() {
	const int arr_len = 5;
	int arr[arr_len] = { 0 };
	for (int i = 0; i < arr_len; ++i) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < arr_len; ++i) {
		for (int j = 1; j < 5 - i; ++j) {
			if (arr[j-1] > arr[j]) {
				int temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < arr_len; ++i) {
		printf("%d  ", arr[i]);
	}
	system("pause");
	return 0;
}
