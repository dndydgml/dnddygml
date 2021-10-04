#include<stdio.h>

int main() 
{
double mile, km;
printf("마일을 입력하시오:");
scanf_s("%lf", &mile);
km = mile* 1.609;
printf("%f킬로미터은 %f마일입니다.\n", mile, km);
return 0;
}