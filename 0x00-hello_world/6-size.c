#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{

	/*Let's print out the size of types */
	printf("Size of a char: %c byte(s) \n", (int) sizeof(char));
	printf("Size of an int: %d byte(s) \n", (int) sizeof(int));
	printf("Size of a long int: %ld byte(s) \n", (int) sizeof(long int));
	printf("Size of a long long int: %lld byte(s) \n ", (int) sizeof(long long int));
	printf("Size of a float: %f byte(s) \n", (int) sizeof(float));

	return (0);
}
