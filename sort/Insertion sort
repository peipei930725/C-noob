include<stdio.h>
#include<stdlib.h>

int main() {
	int A[8] = { 0 };
	for (int i = 0; i < 8; i++){
		scanf_s("%d", &A[i]);
	}
	int temp = 0;
	if (A[0] < A[1]) {
		temp = A[0];
		A[0] = A[1];
		A[1] = temp;
	}
	for (int i = 2; i < 8; i++) {
		for (int j = 0; j < i; j++) {
			if (A[i] < A[j]) {
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
	for (int i = 0; i < 8; i++) {
		printf("%d ", A[i]);
	}
	system("pause");
}
