#include<stdio.h>
int add, sub,mul,div; //�������� ��� (1-2)
int calculator(int x, int y, char op);
int main() {
	int x, y;
	char op;

	while (1) {
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d %c %d", &x, &op, 1, &y);
		calculator(x,y,op);
	}
	return 0;
}

int calculator(int x, int y, char op) {
//	static int add, sub, mul, div;
	switch (op) {
	case ('+'):
		add++;
		printf("������ �� %d�� ����Ǿ����ϴ�.\n", add);
		printf("������: %d\n", x+y);
		break;
	case ('-'):
		sub++;
		printf("������ �� %d�� ����Ǿ����ϴ�.\n", sub);
		printf("������: %d\n", x - y);
		break;
	case ('*'):
		mul++;
		printf("������ �� %d�� ����Ǿ����ϴ�.\n", mul);
		printf("������: %d\n", x * y);
		break;
	case ('/'):
		div++;
		printf("�������� �� %d�� ����Ǿ����ϴ�.\n", div);
		printf("������: %lf\n", (double)x / (double)y);
		break;
	}
	return 0;
}