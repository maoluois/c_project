#include <stdio.h>

/*外部变量声明*/
extern int x;  
extern int y;



int addtwonum1()
{
	return x + y;

}

int main2()

{
	int j;
	j = addtwonum1();
	printf("j = %d", j);
	printf("x = %d", x);

}
	






//printf("x = %d", x);
//printf("y = %d", y);


