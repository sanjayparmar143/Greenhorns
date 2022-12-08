#include<stdio.h>

main(){
	
	int A = 60;
	int B = 90;
	int C;
	
	C = A;
	A = B;
	B = C;
	
	printf("Value of A :- %i\n",A);
	printf("Value of B :- %i",B);
}
