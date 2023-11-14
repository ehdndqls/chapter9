#include<stdio.h>
int power(int base, int power_raised);
int main() {
	int b, p;
	printf("¹Ø¼ö: ");
	scanf_s("%d", &b);
	printf("Áö¼ö: ");
	scanf_s("%d", &p);

	printf("%d^%d = %d", b, p, power(b, p));

	return 0;
}

int power(int base, int power_raised) {
	if (power_raised == 1)
		return base;
	return base * power(base, power_raised - 1);
}