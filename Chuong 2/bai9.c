#include<stdio.h>
int main(){
	int d, m, y;
	scanf("%d%d%d", &d, &m, &y);
	printf("Ngay %02d thang %02d nam %04d\n", d, m, y);
	if(m > 0 && m <= 12){
	switch(m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(d > 0 && d <= 31) printf("YES\n");
			else printf("NO\n"); break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(d > 0 && d <= 30) printf("YES\n");
			else printf("NO\n"); break;
		case 2:
			if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
				if(d > 0 && d <= 29) printf("YES\n");
				else printf("NO\n");
			}
			else {
				if(d > 0 && d <= 28) printf("YES\n");
				else printf("NO\n");
			} break;
	}
}		else printf("NO\n");
}
