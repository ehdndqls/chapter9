#include<stdio.h>
int power(int base, int power_raised);
int main() {
	int b, p;
	printf("�ؼ�: ");
	scanf_s("%d", &b);
	printf("����: ");
	scanf_s("%d", &p);

	printf("%d^%d = %d", b, p, power(b, p));

	return 0;
}

int power(int base, int power_raised) {
	if (power_raised == 1)
		return base;
	return base * power(base, power_raised - 1);
}