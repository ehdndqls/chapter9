#include<stdio.h>
double recursive(int num);
int main() {
	int n = 10;
	printf("%lf",recursive(n));
	return 0;
}
double recursive(int n) {
	if (n == 1)
		return 1.0;
	return 1.0 / (double)n + recursive(n - 1);
}