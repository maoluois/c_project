#include <stdio.h>

int main() {

	int n = 0;
	
	for (int i = 1; i < 10; i ++)
	{ 
		for (int j = 1; j < 10; j ++) {

			if (i <= 2 * j) {
				for (int k = 1; k < 10; k ++) {
					if (j <= 2 * k) {
						n ++;
					}
				}

			}
		}
			
	}
		
	printf("%d", n);
	
	return 0;
}