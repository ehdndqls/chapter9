#include<stdio.h>
int num_count(int);
int main() {
	int n;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);
	printf("자리수의 개수: = %d",num_count(n));
}
int num_count(int num) {
	static int count;
	if (num > 0) {
		num_count(num / 10);
		count++;
	}
	return count;
}