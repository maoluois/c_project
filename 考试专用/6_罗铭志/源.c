#include <stdio.h>
float averageFilter(float input[], int length, int windowSize)
{
	int total = 0;
	for (int i = 0;i < windowSize / 2;i ++)
	{
		total = total + input[i];
			
	}

	return total / length;
}

	
int main()

{

	return 0;
}