#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main() {
	int num = 0,num2=0,remainder=0;
	printf("輸入一個數: \n");
	scanf_s("%d", &num);
	printf("倒過來");
	while (num > 0) {
		num2 *= 10;
		remainder = num % 10;
		num = num / 10;
		num2 += remainder;
	}
	printf("%d\n", num2);

	system("pause");
}
