#include<stdio.h>
int sum(int n);
int main() {
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	printf("1���� %d������ �� = %d", n, sum(n));

	return 0;
}
int sum(int n) {
	if (n == 1)
		return 1;
	return n + sum(n - 1);
}