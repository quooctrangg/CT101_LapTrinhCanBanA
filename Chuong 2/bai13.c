#include<stdio.h>
int main(){
	int a, chuc, donvi;
			scanf("%d", &a);
		chuc = a / 10;
		donvi = a % 10;
			
		if(a <= 9 || a >= 100) printf("Nhap sai");
		else {
			if(chuc == 2) printf("Hai");
			else if(chuc == 3) printf("Ba");
			else if(chuc == 4) printf("Bon");
			else if(chuc == 5) printf("Nam");
			else if(chuc == 6) printf("Sau");
			else if(chuc == 7) printf("Bay");
			else if(chuc == 8) printf("Tam");
			else if(chuc == 9) printf("Chin");
			
				printf(" Muoi");
				
			if(donvi == 1) printf(" Mot");
			else if(donvi == 2) printf(" Hai");
			else if(donvi == 3) printf(" Ba");
			else if(donvi == 4) printf(" Bon");
			else if(donvi == 5) printf(" Nam");
			else if(donvi == 6) printf(" Sau");
			else if(donvi == 7) printf(" Bay");
			else if(donvi == 8) printf(" Tam");
			else if(donvi == 9) printf(" Chin");
	
			}
		
	return 0;
}
