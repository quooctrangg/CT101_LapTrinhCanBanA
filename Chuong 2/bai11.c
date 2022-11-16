#include<stdio.h>

int main() {
	int n, m , y, c;
	int tong = 0;
	int a = 31;
	int b = 30;
			scanf("%d%d%d", &n, &m, &y);
		printf("Ngay %d thang %d nam %d\n", n, m, y);
	
		if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0) c = 29;
		else c = 28;
			
	if( m == 1) tong = n;
	else if (m == 2) tong = a + n;
	else if (m == 3) tong = a  + c + n;
	else if (m == 4) tong = 2 * a + c + n;
	else if (m == 5) tong = 2 * a + b + c + n;
	else if (m == 6) tong = 3 * a + b + c + n;
	else if (m == 7) tong = 3 * a + 2 * b + c + n;
	else if (m == 8) tong = 4 * a + 2 * b + c + n;
	else if (m == 9) tong = 5 * a + 2 * b + c + n;
	else if (m == 10) tong = 5 * a + 3 * b + c + n;
	else if (m == 11) tong = 6 * a + 3 * b + c + n;
	else if (m == 12) tong = 6 * a + 4 * b + c + n;
	
		printf("Co so ngay la: %d\n", tong);

	
	return 0;
} 
