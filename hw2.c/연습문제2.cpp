#include<stdio.h>
int main()
{
	double num1, num2;
	double r1, r2, r3, r4;

	printf("µÎ°³ÀÇ ½Ç¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À:");
	scanf_s("%lf %lf", &num1, &num1);

	r1 = num1 + num2;
	r2 = num1 - num2;
	r3 = num1 * num2;
	r4 = num1 / num2;

	printf("µ¡¼À:%lf \n»¬¼À:%lf \n°ö¼À:%lf \n³ª´°¼À:%lf. \n", r1, r2, r3, r4);
	return 0;