#include<stdio.h>
#include<time.h>
int main(){
	int day, month, year;
	printf("Nhap ngay thang nam sinh: "); scanf("%d%d%d", &day, &month, &year);
	time_t t = time(0);
	struct tm*Now = localtime(&t);
	printf("So tuoi: %d\n", (Now -> tm_year + 1900) - year);
	return 0;
}
