#include<stdio.h>
#include<stdlib.h>

int oddoreven(int num) {
	if (num % 2 == 0 || num == 0)
		return 1;
	else
		return 0;
}
int main() {
	int number = 0;
	printf("請輸入x:");
	scanf_s("%d", &number);
	if (oddoreven(number))
		printf("%d是偶數\n", number);
	else
		printf("%d是奇數\n", number);

	system("pause");
	return 0;
}
