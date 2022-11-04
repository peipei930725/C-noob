#include<stdio.h>
#include<stdlib.h>

int division(int a,int b) {
	if (a % b == 0) 
		return b;
	else
		return division(b, a % b);
}

int main(){
	int num1 = 0, num2 = 0;
	printf("請輸入a,b兩正整數:");
	scanf_s("%d %d", &num1, &num2);

	printf("最大公因數為%d\n", division(num1, num2));

	system("pause");
	return 0;
}
