#include <stdio.h>

void sub1();
void sub2();
void sub3();

int main(){
	sub1();
	sub2();
	sub3();
	return 0;
}

void sub3(){
	puts("00");
}

void sub2(){
	int i;
	for(i=0; i<10; i++){
		printf("*");
	}
}
