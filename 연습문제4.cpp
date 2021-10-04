# include< stdio.h >
int main()
{
	char x;
	printf("알파벳 문자 하나  입력: ");
	scanf_s("%c", &x);
	printf("%C의아스키코드값는 %d이다.\n ", x, x);
}