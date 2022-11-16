#include<stdio.h>

int main(){
	int dd, mm, yy, y;
	scanf("%d%d%d", &dd, &mm, &yy);
	y = yy % 100;
	printf("%02d/%02d/%d", dd, mm, y);
		return 0;
}
