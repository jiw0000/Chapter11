#include <stdio.h>


int is_within(char ch, char* str);

int main(void)
{
	char str[20];

	char* res_fgets;
	char find_ch = 'j';
	int result;

	while (1)
	{
		res_fgets = fgets(str, 20, stdin);
		

		putchar(find_ch);
		putchar('\n');

		result = is_within(find_ch, str);

		if (result)
			puts("o");
		else
			puts("x");
	}

	return 0;
}

int is_within(char ch, char* str)
{
	int result = 0;

	while (*str != ch)
	{
		if (*str == '\0' || *str == '\n')
			return 0;
		str++;
	}

	return 1;
}