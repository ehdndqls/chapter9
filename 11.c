#include<stdio.h>
int biomial_coefficient(int n, int k);
int main() {
	int n, k;
	printf("n=");
	scanf_s("%d", &n);
	printf("k=");
	scanf_s("%d", &k);
	printf("%d", biomial_coefficient(n, k));

	return 0;
}
int biomial_coefficient(int n, int k) {
	if (k == 0 || k == n)
		return 1;
	return biomial_coefficient(n - 1, k - 1) + biomial_coefficient(n - 1, k);
}