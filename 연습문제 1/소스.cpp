#include<stdio.h>
int main()
{
	int x1, y1;
	int x2, y2;
	int r1, r2, r3;

	printf("�� ����� x,y ��ǥ : ");
	scanf_s("%d %d", &x1, &y1);
	printf("�� �ϴ��� x,y ��ǥ : ");
	scanf_s("%d %d", &x2, &y2);

	r1 = x2 - x1;
	r2 = y1 - y2;

	r3 = r1 * r2;

	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�. \n", r3);
	return 0 ;
}