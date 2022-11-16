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
			if(d > 0 && d <= 31) { if(d == 31) printf("Ngay 01 thang %02d nam %d\n", m+1, y);
									else printf("ngay %02d thang %02d nam %04d\n", d+1, m, y);
			} else printf("Nhap sai\n"); break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(d > 0 && d <= 30)  { if(d == 30) printf("Ngay 01 thang %d nam %d\n", m+1, y);
									else printf("ngay %02d thang %02d nam %04d\n", d+1, m, y);
			} else printf("Nhap sai\n"); break;
		case 2:
			if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
				if(d > 0 && d <= 29)  { if(d == 29) printf("Ngay 01 thang 03 nam %04d\n", y);
									else printf("ngay %02d thang 02 nam %04d\n", d+1, y);
			} else printf("Nhap sai\n");
		}
			else {
				if(d > 0 && d <= 28)  { if(d == 28) printf("Ngay 01 thang 03 nam %04d", y);
									else printf("ngay %d thang 02 nam %d", d+1, y);
			} else printf("Nhap sai\n");
		} break;
		case 12:
			if(d > 0 && d <= 31) { if(d == 31) printf("Ngay 01 thang 01 nam %d\n", y + 1);
									else printf("ngay %02d thang 12 nam %04d\n", d+1, y);
			} else printf("Nhap sai\n"); break;
	}
}		else printf("Nhap sai\n");
	return 0;
}
