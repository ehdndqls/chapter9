#include<stdio.h>
int num_count(int);
int main() {
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);
	printf("�ڸ����� ����: = %d",num_count(n));
}
int num_count(int num) {
	static int count;
	if (num > 0) {
		num_count(num / 10);
		count++;
	}
	return count;
}