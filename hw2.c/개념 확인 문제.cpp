#include<stdio.h>

int main() 
{
double mile, km;
printf("������ �Է��Ͻÿ�:");
scanf_s("%lf", &mile);
km = mile* 1.609;
printf("%fų�ι����� %f�����Դϴ�.\n", mile, km);
return 0;
}