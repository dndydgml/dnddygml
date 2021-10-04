#include<stdio.h>
int main()
{
	int a, b, c, d, area = 0;

	printf("좌 상단의 x,y 좌표 : ");
	scanf_s("%d %d", &a, &b);
	printf("우 하단의 x,y 좌표 : ");
	scanf_s("%d %d", &c, &d);
	area = (c - a) * (d - b);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다. \n", area);
	return 0;
}