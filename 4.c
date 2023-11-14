#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int get_random();
int main() {

	for(int i=0;i<3;i++)
	printf("%d\n", get_random());

	return 0;
}
int get_random() {
	static int inited;
	if (inited == 0) {
		printf("초기화 실행\n");
		srand((unsigned)time(NULL));
		inited++;
	}
	return rand();
}