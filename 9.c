#include<stdio.h>
int digit_sum(int);
int main() {
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);
	printf("�ڸ����� ��: = %d", digit_sum(n));
}
int digit_sum(int num) {
	static int sum;
	if (num > 0) {
		digit_sum(num / 10);
		sum += num % 10;
	}
	return sum;
}