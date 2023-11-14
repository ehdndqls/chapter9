#include<stdio.h>
int fib(int);
int main() {
	static int n;
	while (1) {
		printf("fib(%d) = %d\n", n, fib(n));
		n++;
	}
	return 0;
}
int fib(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);
}