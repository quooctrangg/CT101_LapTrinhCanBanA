#include <stdio.h>
#include <string.h>

struct TTSV {
	char Ten[100];
	float Diem;
	char XepLoai[100];
};

/*struct TTSV QuyDoi(struct TTSV k, int size){
	int i;
	struct TTSV l;
	
		if ( k.Diem >= 9.0 ){
		strcpy(l.XepLoai ,"Xuat sac");
	} else if (k.Diem >= 8.0){
		strcpy(	l.XepLoai , "Gioi");
	} else if (k.Diem >= 6.5){
		strcpy(l.XepLoai  , "Trung Binh" );
	} else if (k.Diem >= 4){
		strcpy(l.XepLoai , "Yeu");
	} else strcpy(l.XepLoai , "Kem");
	return l;
	
}*/

struct TTSV QuyDoi(struct TTSV *k, int size){
		if ( k->Diem >= 9.0 ){
		strcpy(k->XepLoai ,"Xuat sac");
		} else if (k->Diem >= 8.0){
			strcpy(k->XepLoai , "Gioi");
		} else if (k->Diem >= 6.5){
			strcpy(k->XepLoai  , "Trung Binh" );
		} else if (k->Diem >= 4){
			strcpy(k->XepLoai , "Yeu");
		} else strcpy(k->XepLoai , "Kem");
}



struct TTSV Nhap(){
	struct TTSV n;
	printf("\nNhap ten sv: ");
	scanf("%s", n.Ten );
	printf("\nNhap Diem: ");
	scanf("%f", &n.Diem);
	return n;
}

void HienThi(struct TTSV f, int k){
	printf("\n%d. %s\t\t\t %.2f\t\t\t%s", k+1 ,  f.Ten, f.Diem, f.XepLoai);

}

int main () {
	struct TTSV sv[100];
	struct TTSV s;
	int n, i;
	printf("\nNhap so sinh vien: ");
	scanf("%d", &n);
	
	for ( i = 0; i < n; i++){
		s = Nhap();
		sv[i] = s;
	}
	printf("\n===========||==========");
	for (i = 0; i < n; i++){
		QuyDoi(&sv[i],n);
	}
	printf("\nHo va ten\t\tDiem\t\t\tXep loai");
	for (i = 0; i < n ;i++){
		HienThi(sv[i], i);
	}
	
	
	return 0;
}
