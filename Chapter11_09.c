#include <stdio.h>


void revers_str(char* str);

int main(void)
{
	char str[20];
	char* res_fgets;

	while (1)
	{
		res_fgets = fgets(str, 20, stdin);

		if (*res_fgets == '\0' || *res_fgets == '\n')
			break;

		revers_str(str);

		puts(str);
	}

	return 0;
}

void revers_str(char* str)
{
	char temp_ch;
	int size = 0;

	while (str[size] != '\0' && str[size] != '\n')
		size++;

	if (str[size] == '\n')
		str[size] = '\0';

	size--;
	for (int i = 0; i <= size / 2; i++)
	{
		temp_ch = str[i];
		str[i] = str[size - i];
		str[size - i] = temp_ch;
	}
}