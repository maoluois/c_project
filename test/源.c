#include <stdio.h>

int DSD = 50;

int main()
{
	
	int i = s(DSD);
	servo();
	printf("%d", DSD);

	printf("%d", i);

	return 0;
}

void servo() {
	DSD = DSD + 10;
}
int s(int DSD) {
	return DSD;
}