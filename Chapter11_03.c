#include <stdio.h>
#include <ctype.h>


char* s_gets(char* st, int n);

int main(void)
{
	char str[20];

	s_gets(str, 20);

	puts(str);
}

char* s_gets(char* st, int n)
{
	char* ret_val;
	int i = 0;

	ret_val = fgets(st, n, stdin);

	if (ret_val)
	{
		while (st[i] != '\0' && !isspace(st[i]))
			i++;

		if (st[i] != '\0')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}