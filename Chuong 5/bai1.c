#include<stdio.h>
char LowCase(char ch)
{
	if(ch >= 'A' && ch <= 'Z') return ch+32;
	else return ch;
}
int main()
{
	char x;
	printf("Nhap ki tu vao: "); scanf("%c", &x);
	printf("Ki tu thuong cua %c la %c",x,LowCase(x));
	return 0;
}
