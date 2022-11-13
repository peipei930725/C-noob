#include<stdio.h>
#include<stdlib.h>

void input_state(bool[], int Ring);

int main() {
	int numRing = 0;
	printf("Welcome to play X - Linked Ring!\n");
	printf("How many X-Linked Ring do you want to solve?\n");
	scanf_s("%d", &numRing);
	printf("What the%d-Linked Ring look like?", numRing);
	printf("Please enter the rings state from inside to outside.");
	printf("If the ring is on the sword, please input 1. Otherwise, please enter 0.");
}



void input_state(bool a[], int numRing) {
	for (int i = 0; i < numRing; ++i) {
		if (i%10==1 && i/10!=1){
			printf("What the state of %dst rings ?", i+1);
			scanf_s("%b".a[i]);
		}
		else if (i % 10 == 2 && i / 10 != 1) {
			printf("What the state of %dnd rings ?", i + 1);
			scanf_s("%b".a[i]);
		}
		else if (i % 10 == 3 && i / 10 != 1) {
			printf("What the state of %drd rings ?", i + 1);
			scanf_s("%b".a[i]);
		}
		else{
			printf("What the state of %dth rings ? ", i + 1);
			scanf_s("%b", a[i]);
		}
		printf("What the state of 1st rings ?");
		scanf_s("%b", a[i]);
	}
}
