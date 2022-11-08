#include<stdio.h>
#include<stdlib.h>

void hex(int x) {
	if (x == 0) {
		return;
	}
	hex(x / 16);

	int temp = x % 16;
	switch (temp) {
	case 10:
		printf("A");
		break;
	case 11:
		printf("B"); 
		break;
	case 12:
		printf("C");
		break;
	case 13:
		printf("D");
		break;
	case 14:
		printf("E");
		break;
	case 15:
		printf("F");
		break;
	default:
		printf("%d", temp);
		break;
	}
	return;
}
int main() {
	int num = 0;
	scanf_s("%d", &num);
	hex(num);

	system("pause");
	return 0;
}
