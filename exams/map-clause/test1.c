#include <stdio.h>

void foo()
{
	int x = 1;
	int y;

	if (x)
		y = 2;
	else
		y = 3;
    printf("x = %d, y = %d\n", x, y);
}

int main(int argc, char* argv[])
{
	foo();

	return 0;
}
