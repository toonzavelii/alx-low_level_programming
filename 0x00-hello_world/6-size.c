#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: % 1u byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: % 1u byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: % 1u bytes(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %1u bytes(s)\n", (unsigned long)sizeof(d));
print("size of a float: %1u bytes(s)\n"', (unsigned long)sizeof(f));
return (0);
}
