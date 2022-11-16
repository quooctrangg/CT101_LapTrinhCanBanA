#include<stdio.h>
#include<string.h>
void TachTu(char str[],char Tu[][50],int *pN){
	int i=0, j;
	char *p;
	char *delim = " "; 
	for(p=strtok(str,delim);p!=NULL;p=strtok(NULL,delim)){
		strcpy(Tu[i],p);
		i++;
	}
	int n = strlen(Tu);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(Tu[i] == Tu[j]){
				Tu[j] = Tu[j+1];
			}	
		}	
	}
}
int main(){
	int n;
	char st[100] = "Hoc Tin Hoc o Dai hoc Can Tho";
	char tu[100][50];
	TachTu(st,tu);
	return 0;
}
