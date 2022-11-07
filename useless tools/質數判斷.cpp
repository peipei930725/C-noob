#include<stdio.h>
#include<stdlib.h>

int primenumber(int x) {
	int counter = 0;
	for (int i = 1; i <= x; i++) {

		if (x % i == 0)
			counter++;
	}
	if (counter == 2)
		return 1;
	else
		return 0;
}
int main() {
	int a = 0;
	scanf_s("%d", &a);
	if (primenumber(a))
		printf("%d是質數", a);
	else
		printf("%d不是質數", a);

	system("pause");
	return 0;
}
