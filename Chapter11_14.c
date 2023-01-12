#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int check_number(char* str);
double pow_func(double base, int exponent);

int main(int argc, char* argv[])
{
	double base;
	int exponent;

	if (check_number(argv[1]) == 0)
	{
		puts("¹Ø¼ö  x");
	}
	else if (check_number(argv[2]) == 0)
	{
		puts("Áö¼ö  x");
	}
	else
	{
		base = atof(argv[1]);
		exponent = atoi(argv[2]);
		printf("¸è½ÂÀÇ °á°ú´Â %.2lf\n", pow_func(base, exponent));
	}

	return 0;
}

int check_number(char* str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]) == 0)
			return 0;
	}
	return 1;
}

double pow_func(double base, int exponent)
{
	for (int i = 1; i < exponent; i++)
	{
		base *= base;
	}
	return base;
}