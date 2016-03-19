#include<stdio.h>
#include<stdlib.h>

 void Recursive(int Reminder, int*sum) {
	if (Reminder <= 9) {
		 if(Reminder != 0)*sum *= Reminder ;
		 return;
	}
	else if (Reminder <= 99) {
		*sum *= (Reminder / 10);
		Recursive(Reminder % 10,sum);
	}
	else if (Reminder <= 999) {
		*sum *= (Reminder / 100);
		Recursive(Reminder % 100,sum);
	}
	else if (Reminder <= 9999) {
		*sum *= (Reminder / 1000);
		Recursive(Reminder % 1000, sum);
	}
	else if (Reminder <= 99999) {
		*sum *= (Reminder / 10000);
		Recursive(Reminder % 10000, sum);
	}
	else if (Reminder <= 999999) {
		*sum *= (Reminder / 100000);
		Recursive(Reminder % 100000, sum);
	}
	}
 
int main2() {
	int x , *sum;
	sum = (int*)malloc(sizeof(int));
	*sum = 1;
	scanf_s("%d", &x);
	 Recursive(x,sum);
	printf("%d", *sum);
	getchar();
	return 0;
}