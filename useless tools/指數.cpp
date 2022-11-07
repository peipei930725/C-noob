#include<stdio.h>
#include<stdlib.h>

int power(int x, int y) {
	int result = 1;
	y++;
	while (--y) {
		result *= x;
	}
	return result;
}


int main() {
	int a = 0, b = 0;
	printf("輸入底數 m與指數 n\n");
	scanf_s("%d %d", &a, &b);
	printf("輸出值為%d\n", power(a, b));

	system("pause");
	return 0;
}
