# include< stdio.h >
int main ()
{
	int x;
	printf("아스키코드값을 입력: ");
	scanf_s("%d", &x);
	printf("%d는아스키문자는 %c이다.\n ",x,x);
}