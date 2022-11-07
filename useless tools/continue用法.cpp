#include<stdio.h>
#include<stdlib.h>

int main() {
	int i = 0;
	
	while (true) {
		i++;
		printf("%d\n", i);
		if (i % 2 == 0) 
			continue;
		if (i == 10)
			break;
	}
	system("pause");
}
