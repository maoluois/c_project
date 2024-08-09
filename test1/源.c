#include <stdio.h>

int main(){
	int num;
	printf("ÇëÊäÈëÄãµÄ×Ö·û:\n");

	scanf_s("%d", &num);
	num = num % 5;
	
	if (num == 4 || num == 0) printf("Lying");
	else printf("Fishing");

	
	return 0;

}

