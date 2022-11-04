#include<stdio.h>
#include<stdlib.h>

int main() {
	int A[8] = { 0 };
	int temp = 0, k = 0;
	for (int i = 0; i < 8; ++i)
	{
		scanf_s("%d", &A[i]);
	}//輸入陣列
	for (int i = 0; i < 7; ++i) 
	{
		int min = A[i];
		for (int j = i+1; j < 8; ++j) 
		{
			if (A[j] < min) 
			{
				min = A[j];
				k = j;
			}
		}
		temp = A[k];
		A[k] = A[i];
		A[i] = temp;
	}
	for (int i = 0; i < 8; ++i)
	{
		printf("%d ", A[i]);
	}
	system("pause");
}
