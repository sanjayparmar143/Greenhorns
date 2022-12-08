#include<stdio.h>

main(){
	
	int Salary = 100;
	
	int HRA;
	int DA;
	int TA;
	int Gross_Salary;
	
	HRA = Salary*10/100;
	DA  = Salary*5/100;
	TA  = Salary*8/100;

    Gross_Salary = Salary + HRA + DA + TA;
    
	printf("Gross Salary :- %i",Gross_Salary);
	
	
	
	
}
