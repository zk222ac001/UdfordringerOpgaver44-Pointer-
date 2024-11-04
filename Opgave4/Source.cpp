#include<stdio.h>
/*
* int main() {
	char** s;
	char foo[] = "Hello World";

	*s = foo;

	printf("s is %s\n",s);

	s[0] = foo;

	printf("s[0] is %s\n", s[0]);

	return 0;
}
*/


/*
There are a few issues with your code. Let’s go through them one by one:

Uninitialized Pointer:
char** s; declares a pointer to a pointer to a char, but it is not initialized.
This means s is pointing to an undefined location in memory.

Dereferencing an Uninitialized Pointer:
*s = foo; attempts to dereference s and assign the address of foo to it.
Since s is uninitialized, this leads to undefined behavior.

Incorrect Use of printf:
printf("s is %s\n",s); is incorrect because s is a char**, not a char*. 
The %s format specifier expects a char*.

Incorrect Assignment:
s[0] = foo; is trying to assign foo to the first element of s,
but s is not properly allocated or initialized.

Here’s a corrected version of your code:
*/

int main() {
    char foo[] = "Hello World";
    char* s;  // Declare a pointer to char

    s = foo;  // Assign the address of foo to s

    printf("s is %s\n", s);  // Print the string pointed to by s

    char* s_array[1];  // Declare an array of char pointers
    s_array[0] = foo;  // Assign the address of foo to the first element

    printf("s_array[0] is %s\n", s_array[0]);  // Print the string pointed to by the first element

    return 0;
}