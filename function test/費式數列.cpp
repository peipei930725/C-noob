#include<stdio.h>
#include<stdlib.h>

int fib(int x) {
	if (x == 0)
		return 0;
	else if (x == 1)
		return 1;
	else
		return fib(x - 2) + fib(x - 1);
}
int main() {
	int num = 0;
	scanf_s("%d", &num);
	printf("%d", fib(num));

	return 0;
}
