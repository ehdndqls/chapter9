#include<stdio.h>
#include<stdlib.h>

int check();
int main() {
	while (1) {
		if (check() == 0)
			return 0;
	}
}

int check() {
	static int count;
	int password;

	printf("��й�ȣ: ");
	scanf_s("%d", &password);

	if (++count == 3) {
		printf("�α��� �õ�Ƚ�� �ʰ�");
		exit(-1);
	}
	return password == 1234 ? 0 : 1;
}