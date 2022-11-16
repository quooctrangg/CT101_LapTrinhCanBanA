#include<stdio.h>
typedef struct{
	char mssv[101];
	char hoten[30];
	char phai[4];
	char nsinh[9];
	float diemtb;
}SSinhVien;

void main(){
	SSinhVien sv;
	FILE *fp = fopen("D:\\DanhsachSV.txt", "rt");
	if (fp != NULL){
		puts("\n     ***** DANH SACH SINH VIEN ******\n");
		while(!feof(fp)){
			fscanf(fp, "%[^-]-%[^(](%[^)])\t%[^\t]\t%f\n", sv.mssv, sv.hoten, &sv.phai, sv.nsinh, &sv.diemtb);
			printf("%s\t%s\t%s\t%s\t%.2f\n", sv.mssv, sv.hoten, sv.phai, sv.nsinh, sv.diemtb);
		};
		fclose(fp);
	}
	else puts("Loi mo tap tin!");
}
