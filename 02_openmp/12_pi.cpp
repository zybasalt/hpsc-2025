#include <cstdio>

int main() {
  int n = 10;
  int a[n], b[n]
  double dx = 1. / n;
  double pi = 0;
  for(int i=0; i<n; i++) {
    double x = (i + 0.5) * dx;
    a[i] = 4.0 / (1.0 + x * x) * dx;
  }
#pragma omp parallel
  for (int j=1; j<N; j<<=1) {
#pragma omp for
    for(int i=0; i<n; i++)
      b[i] = a[i];
#pragma omp for
    for(int i=j; i<n; i++)
      a[i] += b[i-j];
  }
  pi = a[n-1];
  printf("%17.15f\n",pi);
}
