#include <stdio.h>
//#include <stdint.h>
#include <math.h>

void PrintBits64(unsigned long u)
{
	char str[66];
	str[64] = '\n';
	str[65] = 0;
	for (int i = 63; i >= 0; i--)
	{
		str[i] = '0' + (u & 1);
		u >>= 1;
	}

	printf(str);
}

void PrintBits32(unsigned int u)
{
	char str[34];
	str[32] = '\n';
	str[33] = 0;
	for (int i = 31; i >= 0; i--)
	{
		str[i] = '0' + (u & 1);
		u >>= 1;
	}

	printf(str);
}

void PrintBits16(unsigned short u)
{
	char str[18];
	str[16] = '\n';
	str[17] = 0;
	for (int i = 15; i >= 0; i--)
	{
		str[i] = '0' + (u & 1);
		u >>= 1;
	}

	printf(str);
}

void PrintBits8(unsigned char u)
{
	char str[10];
	str[8] = '\n';
	str[9] = 0;
	for (int i = 7; i >= 0; i--)
	{
		str[i] = '0' + (u & 1);
		u >>= 1;
	}

	printf(str);
}

int main()
{
	char c = 'A';
	printf("Character '%c' in binary is ", c);
	PrintBits8(c); // Outputs "01000001"

	printf("\n");

	int i = 255;
	printf("Integer %d in binary is ", i);
	PrintBits32(i);

	printf("\n");

	float x = M_PI; 
	printf("Float  %f in binary is    ", x);

	// We can't print the bits of a float directly.
	// We can only print the bits of integer types.
	// But we can convert our floats into an integer.

	unsigned int u = (unsigned int)x;

	// This is called a cast. It converts our double into a unsigned int
	// Here the value of u is 3

	// This isn't what we want though. We don't want the value of the float
	// We want the bits of a float

	// Here, we are casting a pointer to a float, to a pointer of a unsigned int
	// All pointers are the same type, so no change occurs,
	// When we dereference the pointer, the data is the same
	// but the program now thinks it's an integer instead.
	u = *(unsigned int*)(&x);
	PrintBits32(u);


	double y = M_PI;
	printf("Double %f in binary is ", y);

	// Doubles are like floats, except they have twice the number of bits
	// This means that they can represent a larger range of values
	unsigned long v = *(unsigned long*)(&y);
	PrintBits64(v);
}