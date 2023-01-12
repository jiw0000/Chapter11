#include <stdio.h>


char* str_chr(char* str, char ch);

int main(void)
{
	char str[20];


	char* res_fgets;
	char find_ch = 'j';
	char* result_str;

	while (1)
	{
		res_fgets = fgets(str, 20, stdin);
		

		putchar(find_ch);
		putchar('\n');

		result_str = str_chr(str, find_ch);

		if (result_str)
			puts(result_str);
		else
			puts("x");
	}

	return 0;
}

char* str_chr(char* str, char ch)
{
	char* f_ch = str;

	while (*f_ch != ch)
	{
		if (*f_ch == '\0' || *f_ch == '\n')
			return NULL;
		f_ch++;
	}

	return f_ch;
}