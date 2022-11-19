#include<stdio.h>
#include<stdlib.h>
#define arr_len 5
#define add(x,y) x+y
#define trueorflase(x) x==0?printf("false\n"):printf("true\n");

void fun(int a[]) {
	for (int i = 0; i < arr_len; ++i) {
		a[i] >= 60 ? printf("pass\n") : printf("false\n");
	}
	return;
}

int main() {
	int arr[arr_len] = {0};
	for (int i = 0; i < arr_len; ++i) {
		scanf_s("%d", &arr[i]);
	}
	fun(arr);

	system("pause");
	return 0;
}
