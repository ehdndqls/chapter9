#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int get_dice_face();
int main() {
	static int _1, _2, _3, _4, _5, _6;
	int i = 0, n;

	srand((unsigned)time(NULL));

	for (i; i < 100; i++)
		switch(get_dice_face()){
		case (1):
			_1++;
			break;
		case (2):
			_2++;
			break;
		case (3):
			_3++;
			break;
		case (4):
			_4++;
			break;
		case (5):
			_5++;
			break;
		case (6):
			_6++;
			break;
		}
	printf("1->%d\n2->%d\n3->%d\n4->%d\n5->%d\n6->%d\n", _1, _2, _3, _4, _5, _6);

	return 0;
}
int get_dice_face() {
	return (rand() % 6)+1;
}