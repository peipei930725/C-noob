#include<stdio.h>
#include<stdlib.h>

int swap(int a, int b){
	if (a > b){
		return (b, a);
	}
	return (a, b);
}

int main(){
	const int arr_len = 5;
	int arr[arr_len] = { 0 };
	for (int i = 0; i < arr_len; ++i){
		scanf_s("%d", arr[i]);
	}
	for (int i = 0; i < arr_len; ++i){
		for (int j = 0; j < 5-i; ++j){
			if (arr[j - 1]>arr[j]){
				swap(arr[j - 1],arr[j]);
			}
		}
	}
	for (int i = 0; i < arr_len; ++i){
		printf("%d  ", arr[i]);
	}
	system("pause");
	return 0;
}
