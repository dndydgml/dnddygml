#include<stdio.h>
int main()
{
	int x1, y1;
	int x2, y2;
	int r1, r2, r3;

	printf("좌 상단의 x,y 좌표 : ");
	scanf_s("%d %d", &x1, &y1);
	printf("우 하단의 x,y 좌표 : ");
	scanf_s("%d %d", &x2, &y2);

	r1 = x2 - x1;
	r2 = y2 - y1;

	r3 = r1 * r2;

	printf("두 점이 이루는 직사각형의 넓이는 %d입니다. \n", r3);
	return 0;
}