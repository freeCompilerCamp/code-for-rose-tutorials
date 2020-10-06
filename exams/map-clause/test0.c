#include <stdio.h>

void foo()
{
	int x = 1;
	int y;

#pragma omp target map(to: x)
    x = 0;

	if (x)
		y = 2;
	else
		y = 3;
    printf("x = %d, y = %d\n", x, y);

#pragma omp target map(tofrom: x)
    x = 0;

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
