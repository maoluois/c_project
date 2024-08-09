#include<stdio.h>

int a[10];
int main(void) {
	int i;
	double sum = 0;
	int mx = 0;
	
	printf("Please input your number:");
	for (i = 1; i <= 5; i ++) {
		scanf("%d", &a[i]);
		if (a[i] > mx) mx = a[i];
		sum += a[i];
	}
	printf("your numbers are as follows: ");
	for (i = 1; i <= 5; i ++) {
		printf("%d", a[i]);
		printf(" ");
	}
	printf("\n");
	printf("the mean is: %lf\n", sum / 5);
	printf("the max number is: %d", mx);
	
	
	return 0;
} 
