#include <stdio.h>


int judgePrime(int num) {
	int flag = 1;
	if (num == 1) return 0;

	else if (num == 2) return flag;
	
		
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			flag = 0; // 不是质数
			break;
		}	
		
	}
	
	return flag;
}

void doublePrime(int min, int max) {
	int flag1 = 0;
	int flag2 = 0;
	for (int i = min; i <= max; i += 10) {
		int current = (i - (i % 10)) / 10;
		if (judgePrime(current) == 0) {
			continue;
		}
		else {
			flag1 = 1;
			for (int j = 1; j < 10; j += 2) {
				int num = current * 10 + j;
				if (judgePrime(num) == 0) {
					flag2 = 0;
					continue;
				}
				else {
					flag2 = 1;
					printf("%d\n", num);
				}
			}
		}
	}
	if ((flag1 == 0 && flag2 == 0)) printf("None\n");
}

int main() {
	int num1;
	int num2;
	scanf_s("%d %d", &num1, &num2);
	
	
	doublePrime(num1, num2);
	return 0;

}