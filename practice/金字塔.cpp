#include<stdio.h>
#include<stdlib.h>

int main() {
	int floor = 0;
	printf("輸入層數");
	scanf_s("%d", &floor);
	int k = floor;

	for (int i = 0; i < floor; ++i) {
		for (int k = floor; k - i > 0; --k) {
			printf(" ");
		}
		for (int j = 0; j <= i; ++j) {
			printf("* ");
		}
		printf("\n");
	}
	system("pause");
}
