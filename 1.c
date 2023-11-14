#include<stdio.h>
int add, sub,mul,div; //전역변수 사용 (1-2)
int calculator(int x, int y, char op);
int main() {
	int x, y;
	char op;

	while (1) {
		printf("연산을 입력하시오: ");
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
		printf("덧셈은 총 %d번 실행되었습니다.\n", add);
		printf("연산결과: %d\n", x+y);
		break;
	case ('-'):
		sub++;
		printf("뺄셈은 총 %d번 실행되었습니다.\n", sub);
		printf("연산결과: %d\n", x - y);
		break;
	case ('*'):
		mul++;
		printf("곱셈은 총 %d번 실행되었습니다.\n", mul);
		printf("연산결과: %d\n", x * y);
		break;
	case ('/'):
		div++;
		printf("나눗셈은 총 %d번 실행되었습니다.\n", div);
		printf("연산결과: %lf\n", (double)x / (double)y);
		break;
	}
	return 0;
}