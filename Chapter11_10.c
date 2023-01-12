#include <stdio.h>
#include <ctype.h>


void del_space(char* str);

int main(void)
{
	char str[20];
	char* res_fgets;

	while (1)
	{
		res_fgets = fgets(str, 20, stdin);

		if (*res_fgets == '\0' || *res_fgets == '\n')
			break;

		del_space(str);

		puts(str);
	}
}

void del_space(char* str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (isspace(str[n]))
		{
			str[n] = str[n + 1];
			if (str[n] == '\0')
				return;
			else
			{
				str[n + 1] = ' ';
				del_space(&(str[n + 1]));
			}
		}
		n++;
	}
}