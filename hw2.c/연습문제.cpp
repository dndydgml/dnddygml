#include<stdio.h>
int main()
{
	int a, b, c, d, area = 0;

	printf("�� ����� x,y ��ǥ : ");
	scanf_s("%d %d", &a, &b);
	printf("�� �ϴ��� x,y ��ǥ : ");
	scanf_s("%d %d", &c, &d);
	area = (c - a) * (d - b);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�. \n", area);
	return 0;
}