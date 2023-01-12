#include <stdio.h>

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

	ret_val = fgets(st, n, stdin);

	return ret_val;
}