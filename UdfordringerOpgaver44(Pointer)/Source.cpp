#include <stdio.h>
// Opgaver no 1 : (Declaration and initialization of Pointer)
int main() {
	// her vi definere Normal Ineteger Variabler
	double doubleVar = 13.00;
	int intVar = 12;
	char charVar = 'A';

	// Her vi udskrive Memory Address of normal variabler
	printf("The Memory address of Normal Variabler................................\n");
	printf("\n");
	printf("The memory address of char is: 0x%p\n",&charVar);
	printf("The memory address of int is: 0x%p\n", &intVar);
	printf("The memory address of double is: 0x%p\n", &doubleVar);
	printf("\n");

	// her vi definere Pointer variabler 
	// point to (-->) the memory address of  normal variabler 
	printf("\n");
	printf("The Memory address of Pointer Variabler................................\n");
	printf("\n");
	double* doubleVarPtr = &doubleVar;
	int* intVarPtr = &intVar;
	char* charVarPtr = &charVar;

	printf("The memory address of char* is: 0x%p\n", &charVarPtr);
	printf("The memory address of int* is: 0x%p\n", &intVarPtr);
	printf("The memory address of double* is: 0x%p\n", &doubleVarPtr);
	printf("\n");
	printf("The Value of Normal Variabler................................\n");
	printf("\n");
	printf("The Value of char is: %c\n", charVar);
	printf("The Value of integer is: %d\n", intVar);
	printf("The Value of double is : %f\n", doubleVar);
	printf("\n");
	printf("The Value of Pointer Variabler................................\n");
	printf("\n");
	printf("The Value of *char is: 0x%c\n", *charVarPtr);
	printf("The Value of *int is: 0x%d\n", *intVarPtr);
	printf("The Value of *double is : 0x%f\n",*doubleVarPtr);

	printf("\n");
	printf("The Memory Size Location of each variable................................\n");
	printf("\n");
	printf("The Value of char is: %d byte\n",(int) sizeof(charVar));
	printf("The Value of int is:  %d byte\n",(int) sizeof(intVar));
	printf("The Value of double is : %d byte\n", (int)sizeof(doubleVar));
	printf("The Value of *char is: %d byte\n", (int)sizeof(charVarPtr));
	printf("The Value of *int is:  %d byte\n", (int)sizeof(intVarPtr));
	printf("The Value of *double is : %d byte\n", (int)sizeof(doubleVarPtr));

	// https://stackoverflow.com/questions/9366352/why-would-a-pointer-be-larger-than-an-integer

}