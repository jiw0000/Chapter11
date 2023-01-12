#include <stdio.h>


char* string_in(char* base_str, char* find_str);

int main(void)
{
	char base_str[20];
	char find_str[20] = "at";

	char* res_fgets;
	char* result_str;

	while (1)
	{
		res_fgets = fgets(base_str, 20, stdin);

		

		result_str = string_in(base_str, find_str);

		if (result_str)
			puts(result_str);
		else
			puts("x");
	}

	return 0;
}

char* string_in(char* base_str, char* find_str)
{
	while (*base_str != '\0')
	{
		int index = 0;

		while (base_str[index] == find_str[index])
		{
			if (base_str[index] == '\0'
				|| base_str[index] == '\n')
				break;

			index++;
		}
		if (find_str[index] == '\0'
			|| find_str[index] == '\n')
			return base_str;

		base_str++;
	}
	return NULL;
}