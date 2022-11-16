#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct NgayThang {
	int Day;
	int Month;
	int Year;
};

//1.
struct SinhVien {
	char MSSV[10];
	char HoTen[20];
	struct NgayThang NgaySinh;
	char QueQuan[100];
	float DTBTL;
	float DRL;
	
};
//2.
struct SinhVien Nhap(){
		struct SinhVien x;
	printf("\nNhap mssv: ");
		scanf("%s", x.MSSV);
	printf("\nNhap ho va ten: ");
		scanf("%s", x.HoTen);
	printf("\nNhap ngay thang nam sinh: ");
		scanf("%d%d%d", &x.NgaySinh.Day, &x.NgaySinh.Month, &x.NgaySinh.Year);
	printf("\nNhap que quan: ");
		scanf("%s", x.QueQuan);
	printf("\nNhap Diem trung binh tich luy: ");
		scanf("%f", &x.DTBTL);
	printf("\nNhap Diem ren luyen: ");
		scanf("%f", &x.DRL);
		
	return x;
}

void In(struct SinhVien k){
	printf("\n%-10s %-10s %d/%d/%-10d %-10s %-5.2f %-10.2f", k.MSSV, k.HoTen, k.NgaySinh.Day, k.NgaySinh.Month,
	 k.NgaySinh.Year, k.QueQuan, k.DTBTL, k.DRL);
	
}

void InN(struct SinhVien h[50]){
	int pos;
	printf("\nNhap vi tri cua sinh vien can in: ");
	scanf("%d", &pos);
	In(h[pos-1]);
}

void FindSV(struct SinhVien s[50], int size){
	int i ;
	char str[10];
	printf("\nNhap MSSV can tim : ");
	scanf("%s", str);
	for (i = 0; i < size; i++){
		if (strcmp(str, s[i].MSSV) == 0){
			printf("\nSinh vien co MSSV %s la : ", str);
			In(s[i]);
			exit(0);
		}
	}
	
}

void FindDTBTL(struct SinhVien x[50] , int size){
	int i;
	float max = x[0].DTBTL;
	for (i = 1; i < size; i++){
		if (x[i].DTBTL > max){
			max = x[i].DTBTL;
		}
	}
	printf("\nSinh vien co DTBTL cao nhat la : \n");
	for (i = 0; i < size ; i++){
		if (x[i].DTBTL == max){
			In(x[i]);
		}
	}
}

void FindDRL(struct SinhVien x[50] , int size){
	int i, pos = 0;
	float max = x[0].DRL;
	for (i = 1; i < size; i++){
		if (x[i].DRL > max){
			max = x[i].DRL;
		}
	}
	printf("\nSinh vien co DRL cao nhat la : \n");
	for (i = 0; i < size ; i++){
		if (x[i].DRL == max){
			In(x[i]);
		}
	}
}

void Sort(struct SinhVien s[50], int size){
	int i,j;
	struct SinhVien temp;
	for (i = 0; i < size - 1 ; i++){
		for (j = i + 1; j < size; j++){
			if (s[i].DTBTL < s[j].DTBTL ){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}

int main () {
	struct SinhVien Cls[50];
	struct SinhVien sv;
	int i, n;
	
	//3 Nhap 
	printf("\nNhap so sinh vien: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		sv = Nhap();
		Cls[i] = sv;
	}
	printf("\n================||================");
	//4 In n sinh vien
/*	printf("\nMSSV\t\tHo va ten\t\tNgay Sinh\tQue quan\t\tDTBTL\t\tDRL");
	for (i = 0; i < n; i++){
		In(Cls[i]);
	} */
	
	//5 In sinh vien thu x
/*	InN(Cls); */
	
	//6 Tim theo MSSV
/*	Find(Cls, n); */

	//7 Tim sv co DTBTL cao I 
/*	FindDTBTL(Cls, n); */

	//8 Tim Sv co DRL cao I 
/*	FindDRL(Cls, n); */

	//9 Xep hang sv  
	Sort(Cls, n);
	printf("\n%-10s %-10s %-10s %-10s %-10s %-10s", "MSSV", "Ho va ten", "Ngay Sinh", "Que quan", "DTBTL", "DRL" );
	for (i = 0; i < n; i++){
		In(Cls[i]);
	} 
	return 0;
}
