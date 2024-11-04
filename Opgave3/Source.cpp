#include <stdio.h>

int main() {
    // Pointer arithmetic with char
    char c = 'z';
    char* cp = &c;
   
    printf("the memory address of c %p\n", &c);
    printf("the memory address of cp %p\n", &cp);
    // The memory address of c hold by pointer variable cp in it.
    printf("cp is %p\n", cp);
    // The memory address of cp variable
    printf("cp is %p\n", &cp);
    printf("The character at cp is: %c\n", *cp);
    cp = cp + 1;
    printf("cp + 1 is %p\n", cp);
    printf("\n");
    // Pointer arithmetic with int
    int i = 42;
    int* ip = &i;
    printf("ip is %p\n", ip);
    printf("The integer at ip is: %d\n", *ip);
    ip = ip + 1;
    printf("ip + 1 is %p\n", ip);
    printf("\n");
    // Pointer arithmetic with double
    double d = 3.14;
    double* dp = &d;
    printf("dp is %p\n", dp);
    printf("The double at dp is: %f\n", *dp);
    dp = dp + 1;
    printf("dp + 1 is %p\n", dp);
    printf("\n");
    // Adding 2 to the pointers
    cp = cp + 1; // cp was already incremented by 1, so this adds another 1
    ip = ip + 1; // ip was already incremented by 1, so this adds another 1
    dp = dp + 1; // dp was already incremented by 1, so this adds another 1
    printf("cp + 2 is %p\n", cp);
    printf("ip + 2 is %p\n", ip);
    printf("dp + 2 is %p\n", dp);

    return 0;
}

/*
Explanation:
Pointer Arithmetic with char:
cp points to a char which is 1 byte.
Adding 1 to cp increments the address by 1 byte.

Pointer Arithmetic with int:
ip points to an int which is typically 4 bytes (this can vary based on the system).
Adding 1 to ip increments the address by 4 bytes.

Pointer Arithmetic with double:
dp points to a double which is typically 8 bytes.
Adding 1 to dp increments the address by 8 bytes.

Adding 2 to the pointers:
For char, adding 2 means moving 2 bytes forward.
For int, adding 2 means moving 8 bytes forward (2 * 4 bytes).
For double, adding 2 means moving 16 bytes forward (2 * 8 bytes).

Compile and run this program to see the pointer values before and
after the arithmetic operations. This will help you understand 
how pointer arithmetic works for different data types. 
Let me know if you have any questions!


*/