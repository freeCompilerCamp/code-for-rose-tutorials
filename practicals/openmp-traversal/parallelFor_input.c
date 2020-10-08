#include < stdio.h >
#include < omp.h >
#define N 1000000
int main(void) {
  float a[N], b[N], c[N], d[N];
  int i;
	int j;

  /* Initialize arrays a and b */
  for (i = 0; i < N; i++) {
    a[i] = i * 2.0;
    b[i] = i * 3.0;
  }

 /* Compute values of array c = a+b in parallel. */
  #pragma omp parallel shared(a, b, c) private(i)
  {
    #pragma omp for
    for (i = 0; i < N; i++) {
      c[i] = a[i] + b[i];
    }
  }

	#pragma omp parallel for private(j)
	for (int j = 0; j < N; j++) {
		d[j] = a[i] * b[i];
	}
}
