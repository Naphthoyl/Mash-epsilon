#include <stdio.h>
void printbits(void*a){
	int i; unsigned x;
	x=*(unsigned*)a;
	for(i=31; i>=0; i--){
		if((x & ((unsigned)1<<i))!=0) printf("1");
		else printf("0");
		if(i==31) printf(" ");
		if(i==23) printf(" ");
	}
}

int main(){
	float x=1.0, b, c; int i=0;
	do{
		printf("%d: %e\n", i, x);
		printbits(&x); printf("\n");
		
		b=1+x;
		printbits(&b); printf("\n\n");
		x/=2.0; i--;
		
		c=1+x;
	}
	while(c>1.0);
	
	b=1+x;
	printbits(&b); printf("\n");
}
