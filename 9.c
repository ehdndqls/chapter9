#include<stdio.h>
int digit_sum(int);
int main() {
	int n;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);
	printf("자리수의 합: = %d", digit_sum(n));
}
int digit_sum(int num) {
	static int sum;
	if (num > 0) {
		digit_sum(num / 10);
		sum += num % 10;
	}
	return sum;
}