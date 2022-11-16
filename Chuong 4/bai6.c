#include<stdio.h>
int main(){
	int a, b, c, co, trau;
		for(a=1; a<=100; a++)
			for(b=1; b<=100; b++)
				for(c=1; c<=100; c++) {
						if(a + b + c == 100 && 5*a+3*b+(c/5) == 100) 
						printf("trau dung: %d	trau nam: %d	trau nghe: %d\n", a, b, c);	
				}
					
	return 0;
}
