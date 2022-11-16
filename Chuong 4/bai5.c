#include<stdio.h>
int main(){
	int a, b;
	for(a=1;a<=50;a++)
		for(b=1;b<=50;b++)
			if(2*a + 4*b == 100 && a + b == 43 )
				printf("tho: %d con	ga: %d con\n", b, a);
					return 0;
	
}
